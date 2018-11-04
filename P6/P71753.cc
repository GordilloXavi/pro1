#include <iostream>
using namespace std;


int main(){

    int n, x, max;

    while(cin >> n){
        
        if(n > 0)cin >> max;

        for(int i = 0; i<n-1; ++i){

            cin >> x;

            if(x>max)max = x;


        } 

        cout << max << endl;


    } 


} 
