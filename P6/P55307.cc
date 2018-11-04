#include <iostream>
using namespace std;

int divSum(int n){

    int sum = 1;

    for(int i = 2; i<=n/2; ++i){

        if(not (n%i))sum +=i;


    } 

    return sum;


} 


int main(){

    int a,b;

    bool v = 0;

    while(cin >> a >> b){

        if(a != b and divSum(a) == b and divSum(b) == a){
            
            
            cout << (v ? "," : "")<< "(" << a << " " << b << ")";

            v = 1;

            }

    } 

    cout << endl;


} 
