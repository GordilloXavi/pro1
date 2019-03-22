#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int NCHAR = 5;

// returns first NCHAR chars of w (assuming that w.size() >= NCHAR)
string SelectFirstChars (const string& w) {
  string s = "";
  for (int j=0; j<NCHAR; ++j)
     s.push_back(w[j]);
  return s;
}

// IF YOU WRITE NEW FUNCTIONS/PROCEDURES, ADD THEM HERE

// returns last NCHAR chars of w (assuming that w.size() >= NCHAR)
string SelectLastChars (const string& w) {

    string s = "";
    int sz = w.size();
    for(int i = sz-NCHAR; i<sz ; ++i){
        s+= w[i];
    } 
    return s;
}

vector<string> makeBeg(const vector<string> words){
    int s = words.size();
    vector<string> v(s);

    for(int i = 0; i<s; ++i)if(words[i].size() >= 5)v[i] = SelectFirstChars(words[i]);

    return v;
} 

bool binSearch(const vector<string>& v, string word){

    int l = 0, r = v.size(), m = (l+r)/2;

    while(l<r){
        m = (l+r)/2;
        if(v[m] < word)l = m+1;
        else if(v[m] > word)r = m-1;
        else return true;
    } 
    return v[l] == word;
} 

bool SatisfiesProperty (const vector<string>& words) { // SORT THE VECTOR and make a vector with the first 5 chars
    
    int sz = words.size();
    vector<string> beg = makeBeg(words);

    for(int i = 0; i<sz; ++i){
        //cout << beg[i] << endl;
        //
        if(words[i].size() < 5)return false;

        string last = SelectLastChars(words[i]); 
        bool b = binSearch(beg, last);
        if(not b)return false;

    } 
    return true;

}

int main() {
  vector<string> words(0);
  string s;
  while (cin >> s)
     words.push_back(s);

  sort(words.begin(), words.end());

  if (SatisfiesProperty (words))
     cout << "yes" << endl;
  else
     cout << "no" << endl;
}
