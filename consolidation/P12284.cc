#include <iostream>
#include <vector>
using namespace std;

struct Word{
    string w;
    int reps;
} ;



int main(){
    int n,k;

    while(cin >> n >> k){
       
        vector<Word> v(n);
        
        for(int i = 0; i<n; ++i){
            Word wo;
            cin >> wo.w;
            wo.reps = 1;
            v.push_back(wo);     
        }  



    } 
} 
