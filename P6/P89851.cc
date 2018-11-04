#include <iostream>
using namespace std;




int main(){


    int n, x;

    while(cin >> n){

        int s = 0;

        int sum = (n*(n+1))/2;

        for(int i = 0; i<n-1; ++i){
    
            cin >> x;

            s+=x;


        } 

        int res = sum-s;

        cout << res << endl;


    }

} 
