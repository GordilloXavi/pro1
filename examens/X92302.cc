#include <iostream>
#include <vector>
using namespace std;


void LlegirParaules(vector<string>& cas, string& paraula) {
       while (paraula != "FI") {
                 cas.push_back(paraula);
                       cin >> paraula;
                          }
            }

bool isVow(char c){


    return (c == 'A' or c == 'E' or c == 'I' or c == 'O' or c == 'U');

} 


int vows(string& s){

    int siz = s.size();

    int v = 0;

    for(int i = 0; i<siz; ++i){

        if(isVow(s[i]))v++;

    } 

    return v;

} 

int main(){

    string w;

    while(cin >> w){

    vector<string> words;

    LlegirParaules(words, w);

    int sz = words.size();

    bool found = false;

    int i;

    for(i = 0; i<sz-1 and not found; ++i){

            found = vows(words[sz - 1]) == vows(words[i]);

    } 

    if(not found)cout << '-' << endl;

    else cout << words[i-1] << ", " << i-1 << endl;

    }



} 
