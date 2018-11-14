#include<iostream>
using namespace std;


int main() {

    
    int f, n, tot = 1;

    bool odd = 0;
    cin >> f;

    while(cin >> n){

        tot+=(n == f and odd);

        odd = !odd;

    } 

    cout << tot << endl;


} 
