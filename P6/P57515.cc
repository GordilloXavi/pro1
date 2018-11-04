#include <iostream>
#include <cmath>
using namespace std;

int dig(int n){
    
    if(n<10)return 1;

    return 1+dig(n/10);

} 

void rot(int& n){

    int p = n%10*pow(10, dig(n)-1); 

    n /= 10;

    n +=p; 

    


} 

int rotacio_dreta(int x, int k){

    for(int i = 0; i<k; ++i)rot(x);


    return x;


} 

int main(){

   int n, k;
   
   while(cin >> n >> k)cout << rotacio_dreta(n,k) << endl;

    




} 
