#include <iostream>
using namespace std;

bool isPrime(int n){

    if(n<2)return false;
    for(int i = 2; i*i<=n; ++i){
        if(n%i == 0)return false;
    } 
    return true;

} 

void printPrimes(int n){

    int x = 1;

    for(int i = 0; i<n; ++i){
        x++;
        while(not isPrime(x))x++;
        if(i!= 0)cout << ',';
       cout << x; 
    } 
    cout << endl;
} 

int main(){

    int n; 
    while(cin >> n){

        printPrimes(n);

    } 
} 
