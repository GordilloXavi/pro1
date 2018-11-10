#include<iostream>
#include <vector>
using namespace std;


int main() {

    int n,p,k;
    char c;

    cin >> n >> p >> k >> c;

    vector<string> v(n);

    for(int i = 0; i<n; ++i)cin >> v[i];

    if(c == 'd'){

        for(int i = 0; i<k; ++i){
            
            
            cout << v[(p+i+1)%v.size()];

            if(i!=k-1)cout << ' ';
        } 
        cout << endl;

    } 
    else{
        
        for(int i = 0; i<k; ++i){
            
            if(p-1-i < 0)cout << v[v.size()-abs(p-1-i)];

            else cout << v[p-1-i];

            if(i!=k-1)cout << ' ';
        } 
        cout << endl;
    } 

} 
