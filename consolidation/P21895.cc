#include<iostream>
using namespace std;

string toString(int n){

    string s = "";

    while(n>0){

        s+= '0'+n%10;
        n/= 10;

    } 

    for(int i = 0; i<s.size()/2; ++i){

        char t = s[i];

        s[i] = s[s.size()-1-i];

        s[s.size()-1-i] = t;

    } 

    return s;


} 


bool strobo(int k){

    string n = toString(k);

    int s = n.size();

    for(int i = 0; i<s/2; ++i){

        if( n[i] != '0' or  n[i] != '8' or n[i] != '1' or n[i] != '6' or n[i] != '9' )return false;

        else if((n[i] == '0' or n[i] == '1'  or n[i] == '8') and ( n[i] != n[s-1-i]))return false;

        else if(n[i] == '6' and n[s-1-i] != '9')return false;

        else if(n[i] == '9' and n[s-1-i] != '6')return false; 

    } 

    return true;

} 

int main() {

    int n, odd = 0;

    while(cin >> n){

        if(strobo(n)){
            
            cout << n << " is strobogrammatic\n";

            if(n %2 == 1)odd++;
        } 
        else cout << n << " is not strobogrammatic\n";


    } 

    cout << "odd strobogrammatic: " << odd << endl;
     

} 
