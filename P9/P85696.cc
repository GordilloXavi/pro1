struct Rational {
    int num, den;
};

int abs(int n){return n<0?-n:n;}

int mcd(int a, int b){

    if(!a or !b)return a+b;

    return mcd(b, a%b);

} 

Rational rational(int n, int d){

    Rational r = {0,1};

    if(n == 0)return r;

    int d1 = mcd(n,d);



    r.num = abs(n/d1);
    if(n*d < 0)r.num *= -1;
    r.den = abs(d/d1);

    return r;

} 
