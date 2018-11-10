#include<iostream>
using namespace std;

double fact(int n){return (n == 0 ? 1 : n*fact(n-1));}

int main() {

   int n;

   double e;

    while(cin >> n){
        
        e = 0;

        for(int i = 0; i<n; ++i){

            e+= 1.0/fact(i);
        } 

        cout.setf(ios::fixed);
        cout.precision(10);

        cout << "With " << n << " term(s) we get " << e << ".\n";

    }  

} 
