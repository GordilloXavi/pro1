#include<iostream>
#include <cmath>
using namespace std;


int main() {

    int a,b,c,d;

    bool f = false;

   while(not f and cin >> a >> b >> c >> d ){

       if(a == 0 or c == 0) f = true;


   }  

   if(f)cout << a << "^3 + " << c << "^3 = "<< max(a,c) << "^3\n";

   else cout << "No solution!\n";
} 
