#include <iostream>
#include <vector>
using namespace std;

bool isPrime(int n){

    if(n<2)return false;
    for(int i = 2; i*i <= n; ++i){
        if(n%i == 0)return false;
    } 
    return true;
} 

bool isPal(int n){

    int rev = 0, x = n;

    while(x > 0){
        rev = rev*10 + x%10;
        x/= 10;
    } 
    //cout << rev << endl;
    return n == rev;

} 

int digits(int n){
    if(n < 10)return 1;
    return 1+digits(n/10);
} 

int ten(int n){
    if(n < 1)return 1;
    return 10*ten(n-1);
} 

int nextPal(int n){
    
    if(n<10)return n+1;

    int d = digits(n);
    int x;
    n+= ten(d/2-1);
    if( d >= 2){
        x = (n/ten(d/2-1))%10;
    }
    int x2 = (n / ten(d/2) )%10;
    if(x2 < 9 and d %2 == 0)n+= ten(d/2);
    else if(x2<9 and d%2 != 0)n+= ten(d/2+1);
    else{
        if(d%2 == 0){
            n+= ten(d/2-1);
        } else{
            n+=ten(d/2);
        } 
    } 
    cout << "next pal: " << n << endl;
    return n;
} 

int palNum(int n){
    
    if(n == 1 or n == 2)return n+1;
    int x = 5;
    int i = 3;
    while(i <= n){
        if(isPal(x)){
            if(isPrime(x)){
                if(i == n)return x;
                i++;
            } 
            x = nextPal(x);
        } 
        else x++;
    } 

    return x-2;

} 

int main(){
    int n;
    while(cin >> n){
        cout << palNum(n) << endl;
    } 
} 
