#include<iostream>
#include <vector>
using namespace std;

int main() {

    int n;

    while(cin >> n){

        vector<int> v(n);

        for(int i = 0; i<n; ++i)cin >> v[i];

        cout << v[0];

        bool b = 1;

        int i;

        for(i = 1; i<n/2 +(n%2);i += b){
            
            if(b)cout << ' ' << v[n-i];
            else cout << ' ' << v[i];

            b = !b;

        } 
        if(n%2==0)cout  << ' '<< v[i] << endl;
        else cout << endl;
    } 


} 
