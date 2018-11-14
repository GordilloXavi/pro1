#include <iostream>
using namespace std;

int binary2octal(int n) {

        int s = (n%10+2*(n%100/10) + 4*(n%1000/100));

        if(n<111)return  s;

        return s + 10*binary2octal(n/1000);

}


int main(){
    int n;
    while (cin >> n){
        cout  << n << " is equivalent to " << binary2octal(n);
        cout  << " in base 8" << endl;
    }    
}
