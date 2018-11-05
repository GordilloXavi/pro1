#include <iostream>
#include <vector>
using namespace std;



int main(){

    int n;

    while(cin >> n){

        vector<int> V(n);

        for(int i = 0; i<n; ++i){

            cin >> V[i];

        } 

        if(n>0)cout << V[n-1];

        for(int i = n-2; i>=0; --i){

            cout << " " << V[i];

        } 

        cout << endl;


    } 



} 
