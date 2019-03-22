#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct Word{
    string w;
    int reps;
} ;

bool func(Word& a, Word& b){
    return ( (a.reps == b.reps and a.w<b.w )or (a.reps > b.reps ) );
} 


int main(){
    int n,k;
    while(cin >> n >> k){
        vector<string> words(n);
        for(int i = 0; i<n; ++i)cin >> words[i];
       sort(words.begin(), words.end()); 
        vector<Word> Wreps;
       for(int i =0 ; i<n; ++i) {
           if(i > 0 and words[i] == words[i-1]){
               Wreps[Wreps.size()-1].reps++;
           } else{
               Word w; 
               w.w = words[i];
               w.reps = 1;
               Wreps.push_back(w);
           } 
       } 
       sort(Wreps.begin(), Wreps.end(), func);
       for(int i =0 ;i<k;++i)cout << Wreps[i].w << endl;
       cout << "----------" << endl;
    } 
} 
