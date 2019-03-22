#include <iostream>
#include<iostream>
#include <vector>
using namespace std;

typedef vector< vector<int> > Matrix;

void display(Matrix& m){

    int r = m.size();
    int c = m[0].size();

    for(int i = 0; i<r; ++i){
        for(int j = 0; j<c; ++j)cout << m[i][j] << ' ';
        cout << endl;
    } 


} 


int main() {
} 
#include <vector>
using namespace std;

bool open(char c){return c == '(' or c== '[' or c == '{';} 

bool match(char open, char close){

    if(open == '(' and close == ')')return true;
    if(open == '[' and close == ']')return true;
    if(open == '{' and close == '}')return true;
    return false;


} 

bool isC(string&s){

    vector<char> v;

    for(int i = 0; i<(int)s.size(); ++i){

        if(open(s[i]))v.push_back(s[i]);

        else if(v.size() > 0 and match(v[v.size()-1], s[i]))v.pop_back();

        else return false;

    } 
    return v.size() == 0;

} 

int main() {

    string s;
    while(cin >> s){

        cout << (isC(s)? "yes" : "no" )<< endl;


    } 
} 
