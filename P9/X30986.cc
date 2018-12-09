#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct Word{
    string word;
    int repetitions;
} ;

vector<Word> compute(int n){

    vector<Word> reps;

    for(int i = 0; i<n; ++i){

        string s;
        cin >> s;
        bool found = false;
        for(int j = 0; j<(int)reps.size() and not found; ++j){
            
            if(reps[j].word == s){
                found = true;
                reps[j].repetitions++;
            } 
        } 
        if(not found){
            Word w;
            w.word = s;
            w.repetitions = 1;
            reps.push_back(w);
        } 

    } 
    return reps;

} 

bool comp(Word w1, Word w2){
    if(w1.repetitions == w2.repetitions)return w1.word<w2.word;
    return w1.repetitions > w2.repetitions;
} 


int main() {

    int n;
    while(cin >> n){


        vector <Word> app = compute(n);

        sort(app.begin(), app.end(), comp);
               

        for(int i = 0; i<(int)app.size(); ++i){
            cout << app[i].repetitions << ' ' << app[i].word << endl;
        } cout << "----------\n";

    } 




} 
