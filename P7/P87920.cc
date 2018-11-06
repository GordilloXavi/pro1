#include <iostream>
#include <vector>
using namespace std,


int main(){

    int n;
    
    while(cin >> n){

        vector<int> V(n);

        for(int i = 0, i<n, ++i)cin >> V[i];

        for(int i = 0; i<n; ++i){ 

            for(int j = 0; j<n; ++j){

                if(j!=i)sum += V[j];


            } 

            if(V[i] == sum)cout << "YES\n";

        } 


    } 


} 
