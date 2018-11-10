#include<iostream>
#include <vector>
using namespace std;


int main() {

    int n;
    
    cin >> n;

    vector<int> v(n);   

    for(int i = 0; i<n; ++i)cin >> v[i];

    vector<int> v2(n);

    for(int i = 0; i<v.size(); ++i){

        cin >> n;

        v2[n] = v[i];

    } 

    cout << v2[0];
    for(int i = 1; i<v2.size(); ++i)cout << ' ' << v2[i];
    cout << endl;


} 
