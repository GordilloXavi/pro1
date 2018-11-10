#include <iostream>
using namespace std;


int main(){

    int n,d,x; 

    cin >> n;

    d = n;

    
    while(x != -1  and cin >> x){

        if(n == 1){
            cout << "At the position " << d << " there is a(n) " << x << ".\n";
            x = -1;
        } 
        n--;

    } 

    if(x != -1)cout << "Incorrect position.\n";


} 
