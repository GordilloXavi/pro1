#include <iostream>
using namespace std;

int main(){

    int n, x;

    cin >> n;

    cout << "At the position " << n << " there is a(n) "; 

    while(cin >> x and x != -1){

        if(n == 1){

            cout << x << ".\n";

            x = -1;
        } 
        
        n--;

    } 

    


} 
