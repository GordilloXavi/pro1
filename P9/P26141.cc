#include<iostream>
using namespace std;


struct Rational {
    int num, den;
};

int abs(int n){return n<0?-n:n;}

int mcd(int a, int b){

    if(!a or !b)return a+b;

    return mcd(b, a%b);

} 

Rational rational(int n, int d){

    Rational r;
    r.num = 0;
    r.den = 1;

    if(n == 0)return r;

    int d1 = mcd(n,d);



    r.num = abs(n/d1);
    if(n*d < 0)r.num *= -1;
    r.den = abs(d/d1);

    return r;

} 

void print(Rational r){
    if(r.den == 1)cout << r.num << endl;
    else cout << r.num << '/' << r.den << endl;
} 

void operate(Rational& r, string& s, int n, int d){

    Rational result;
    result.num = 0;
    result.den = 1;

    if(s == "add"){

        result.den = d*r.den;
        result.num = n*r.den + d*r.num;
        

    }else if(s == "substract"){


        result.den = d*r.den;
        result.num = d*r.num-n*r.den;

    }else if(s == "multiply"){

        result.den = d*r.den;
        result.num = n*r.num;
    } else if(s == "divide"){


        result. num = r.num*d;
        result.den = r.den*n;
    } 
    r = rational(result.num, result.den);

} 

int main() {

    int a,b;

    cin >> a >> b;

    Rational r = rational(a,b);
    
    string s;

    print(r);

    while(cin >> s >> a >> b){

        operate(r,s,a,b);
        print(r);

    } 

} 
