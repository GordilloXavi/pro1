#include <vector>
#include<iostream>
using namespace std;

bool is_uni(vector<int>& v){

    int sz = v.size();

    if(sz<=2)return 0;

    int p = 0;

    for(int i = 1; i<sz-1; ++i){

        if(v[i]>v[i-1] and v[i]>v[i+1])p++;

        if(v[i]<v[i+1] and v[i]<v[i-1])return 0;

        if(p>1)return 0;
    } 

    return p;

} 

int main() {

    int n;
    bool found = 0;

    while(cin >> n and not found){

        vector<int> v(n);

        for(int i = 0; i<n; ++i)cin >> v[i];

        found = is_uni(v);

        if(found){


            for(int i = 0; i<n-1; ++i)cout << v[i] << ' ';

            cout << v[n-1] << endl;
        } 
    } 

    if(not found)cout << "none\n";
} 
