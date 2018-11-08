#include <iostream>
#include <vector>
using namespace std;

void reverse(string& s){

    for(int i = 0; i<s.size()/2; ++i){

        char c = s[i];
        s[i] = s[s.size() -1-i];
        s[s.size() -1 -i] = c;

    } 


} 


string toB(int n, int b){
    
    string s = "";

    while(n>=b){
        
        if(b>10 and n%b >= 10){
            s+= char('A' + n%b-10);
        } 
        else s += char('0' + n%b);

        n /= b;


    } 

    if(n>=10)s+= char('A' + n-10);
    else s+= char('0' + n%b);

    reverse(s);

    return s;

}

bool comp(string A, string B, string res){
        
    if(A.size() + B.size() != res.size())return false;

    for(int i = 0; i< A.size(); ++i){


        for(int j = 0; j<res.size(); ++j){

            if(A[i] == res[j]){
                
                res[j] = 'x';
                break;

            }else if(j == res.size())return false;

        } 

    } 
    
    for(int i = 0; i< B.size(); ++i){

        for(int j = 0; j<res.size(); ++j){

            if(B[i] == res[j]){

                res[j] = 'x';
                break;

            } else if(j == res.size())return false;
        } 

    } 

    for(int  i = 0; i<res.size(); ++i){

        if(res[i] != 'x')return false;

    } 
    return true;

} 




int main(){

    
    int a,b;
    bool found;
    while(cin >> a >> b){

        found = false;

        cout << "solutions for " << a << " and " << b << endl;

        for(int i = 2; i<=16; ++i){

            string sA = toB(a,i);
            string sB = toB(b,i);

            string res = toB(a*b, i);

            if(comp(sA, sB, res)){

                cout << sA << " * " << sB << " = " << res << " (base " << i << ")\n";

                found = true;
            } 

        } 

            if(not found)cout << "none of them\n";
            cout << endl;
    }


}
