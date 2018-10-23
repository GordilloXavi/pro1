#include <iostream>
using namespace std;

int number_of_digits(int n){

    if(n<10)return 1;

    return 1 + number_of_digits(n/10);


} 

int to_base(int n, int b){

    if(n<b)return n;

    if(!(n%b))return 10*to_base(n/b, b);
    
    return n%b + 10*to_base(n/b, b);



} 

void triplet(unsigned int n, int b, int c){


    unsigned int tob = to_base(n,b);

    int dig = number_of_digits(tob);

    if(dig<=c){

        for(int i = 0; i< c-dig; ++i)cout << '#';
        cout << tob << endl;

    } 
    else{

        for(int i = 0; i<dig; ++i)cout << '*';
        cout << endl;

    } 


} 

int main(){


    unsigned int n, b, c;

    while(cin >> n >> b >> c)triplet(n,b,c);


} 
