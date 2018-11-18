#include<iostream>
using namespace std;

int to_base(int n, int b){

    if(n<b)return n;

    return (n%b) + 10*to_base(n/b,b);

} 


bool three_equal_consecutive_digits(int n, int b){

   if() 


} 

int main() {

    int n, b;

    while(cin >> n >> b)cout << to_base(n,b) << endl;
    


} 
