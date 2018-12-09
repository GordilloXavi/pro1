#include <iostream>
#include <vector>
using namespace std;

struct Word{
    int total;
    string word;
}; 

vector<Word> count(vector<string>& v){

    int sz = v.size();
    vector<Word> vWords;
    for(int i = 0; i<sz; ++i){

        bool found = false;
        for(int j = 0; j<(int)vWords.size() and not found; ++j){
            if(vWords[j].word == v[i]){
                vWords[j].total++;
                found = true;
            } 

        } 
        if(not found){
            Word w;
            w.word = v[i];
            w.total = 1;
            vWords.push_back(w);
        } 

    } 
    return vWords;

} 

void print_thing(vector<Word>& v){

    int iter = 1;
    bool next = true;

    while(next){

        int total = 0;
        next = false;
        for(int i = 0; i<(int)v.size(); ++i){
            if(v[i].total == iter)total += v[i].word.size();    
            if(v[i].total > iter)next = true;
        } 
        if(total > 0)cout << iter << " : " << total << endl;
        iter++;

    } 


} 

int main() {

    int n;

    while(cin >> n){

        vector<string> words(n);

        for(int i = 0; i<n; ++i)cin >> words[i];

        vector<Word> occs = count(words);

        print_thing(occs);
        cout << endl;
    } 


} 
