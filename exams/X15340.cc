#include<iostream>
using namespace std;

const string d = "donald";
const string t = "trump";


int main() {

    int n;

    while(cin >> n){

        string s, l;

        int tot = 0;

        for(int i = 0; i<n; ++i){

            cin >> s;

            tot += (s == t and l == d);

            l = s;

        } 

        cout << tot << endl;

    } 



} 
