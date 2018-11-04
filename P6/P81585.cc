#include <iostream>
using namespace std;


int main(){

    int n, max, x, sum;

    while(cin >> n){

        sum = 0;
        max = 0;

        for(int i = 0; i<n; ++i){
            
             cin >> x;

             sum += x;

             if(x > max)max = x;

        } 

        sum -= max;

        if(max == sum)cout << "YES\n";

        else cout << "NO\n";



    } 



} 
