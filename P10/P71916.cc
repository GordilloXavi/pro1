#include <vector>
#include <iostream>
using namespace std;

struct Letter{

    char l;
    int occs;

} ;


vector<Letter> toL(const vector<char>& v){

    int sz = v.size();

    vector<Letter> w;

    for(int i = 0; i<sz; ++i){
        bool found = false;
        for(int j = 0; j<(int)w.size(); ++j){

            if(v[i] == w[j].l){
                found = true;
                w[j].occs++;
            } 
        } 
        if(not found){
            Letter l1;
            l1.l = v[i];
            l1.occs = 1;
            w.push_back(l1);
        } 

    } 
    return w;
} 


bool isAnagram(vector<char>& w1, vector<char>& w2){

    if(w1.size() != w2.size())return false;

    vector<Letter> v1 = toL(w1);
    vector <Letter> v2 = toL(w2);

    int s1 = v1.size(), s2 = v2.size();

    for(int i = 0; i<s1; ++i){
        bool found = false;
        
        for(int j = 0; j<s2 and not found;++j){
            
            if(v1[i].l == v2[j].l){

                if(v1[i].occs == v2[j].occs)found = true;
                else return false;
            } 
        } 
        if(not found)return false;
    } 
    return true;
} 



int main() {

    int n;

    cin >> n;

    for(int i = 0; i<n; ++i){

        vector<char> w1;
        vector<char> w2;

        char c;

        while(cin >> c and c != '.'){
            if(c >= 'A' and c<= 'Z')w1.push_back(c);
        } 
        while(cin >> c and c != '.'){
            if(c >= 'A' and c<= 'Z')w2.push_back(c);
        } 

        bool a = isAnagram(w1,w2);

        if(a)cout << "YES\n";
        else cout << "NO\n";

    } 


} 
