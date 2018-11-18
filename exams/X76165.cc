#include<iostream>
using namespace std;

bool is_sawtooth(){


    int a,b,c;

    cin >> b;

    bool v = 0;

    
    while(cin >> c){

        if(v and ( (a>=b and b>=c ) or (a<=b and b<=c)))return 0;

        v = 1;

        a = b;
        b = c;

    } 

    return 1;

} 

int main() {

   if(is_sawtooth())cout << "yes\n";
   else cout << "no\n"; 

} 
