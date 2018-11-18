#include<iostream>
using namespace std;

int max(int a, int b){

    if(a>b)return a;
    return b;

} 
int max(int n){
    
    if(n<10)return n;

    return max(n%10, max(n/10));
} 


int main() {

    int n;

    while(cin >> n){

        cout << "Maximum digit of " << n << " is " << max(n) << ".\n";

    } 



} 
