#include <iostream>
using namespace std;

bool isPrime(int n){

    if(n<=1)return 0;

   int div = 2;

   for(div; div*div <= n; ++div){

       if(n%div == 0)return 0;


   } 


    return 1;


} 


int main(){

    int n;

    while(cin >> n and isPrime(n)){

        

        while(not isPrime(n+1))n++;

        cout << n+1 << endl;


    } 


} 
