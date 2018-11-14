#include<iostream>
#include <vector>
using namespace std;

bool isCons(char c){

    return (c != 'A' and c != 'E' and c != 'O' and c != 'I' and c != 'U');

} 

int numCons(string& s){
    
    int sz = s.size();

    int tot = 0;

    for(int i = 0; i<sz; ++i){
        
        tot+= isCons(s[i]);


    } 

    return tot;

} 

void LlegirParaules(vector<string>& cas, string& paraula) {
   while (paraula != "FI") {
      cas.push_back(paraula);
      cin >> paraula;
   }
}


int main() {

    string s;

    while(cin >> s){
         
        vector<string> v;

        LlegirParaules(v, s);

        int sz = v.size();


        bool found = false;

        if(sz)for(int i = sz-2; i>= 0 and not found; --i){

            int num = numCons(v[sz-1]);

            if(numCons(v[i]) == num){
                cout << v[i] << ", " << i << endl;
                found = true;
            } 


        } 

        if(not found)cout << "-\n";

        
    }


} 
