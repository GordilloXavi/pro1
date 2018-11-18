#include<iostream>
using namespace std;

int pow(int a, int b){
    
    int n = 1;
    
    for(int i = 0; i<b; ++i)n*=a;

    return n;
} 

int dig(int n){
        
    if(n<10)return 1;
    return 1+dig(n/10);


} 

bool is_narcissistic (int n){

    int s = 0;
    int t = n;
    while(t>0){
        s+=pow(t%10, dig(n));
        t/=10;
    } 

    return s==n;

} 

int main() {


    int n;
    bool narc = 1;

    while(narc and cin >> n ){
        narc = is_narcissistic(n);
    } 
    if(narc)cout << "SI\n";
    else cout << "NO\n";


} 
