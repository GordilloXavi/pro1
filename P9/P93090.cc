#include <iostream>
using namespace std;

struct Fraction {
         int num, den;   // always strictly positive
};

int gcd(int a, int b){
    return b!=0 ? gcd(b,a%b) : a;
} 

Fraction addition(const Fraction& x, const Fraction& y){

    int d = x.den*y.den;
    int n = (x.num*y.den) + (x.den*y.num);

    int g = gcd(d,n);
    Fraction f;
    f.den = d/g;
    f.num = n/g;
    return f;

} 


int main() {

    char c;
    Fraction last,f;
    last.num = 0;
    last.den = 1;

    while(cin >> f.num >> c >> f.den >> c){

        f = addition(f,last);
        if(c == '=')break;
        last = f;
    } 

    cout << f.num << '/' << f.den << endl;
} 
