#include <iostream>
using namespace std;


int main(){
    
    int n, x;

    while(cin >> n){

        int max = 0, M = 0, MR = 0;

        for(int i = 0; i<n; ++i){

            cin >> x;

            if(MR + x > 0)MR += x;

            else MR = 0;
            
            M+= x;

            if(M > max)max = M;

        } 
            
        cout << max << " " << MR << endl;

    } 



} 



