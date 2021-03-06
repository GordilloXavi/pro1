#include <iostream>
using namespace std;

void write_digit(int d,int x) {
    
    if(x == 1)cout << d;
    else{
        cout << d;

        write_digit(d,x-1);
    } 
}


void write_expanded(int n) {

    if(n<10)write_digit(n,n+1);

    else{

        write_expanded(n/10);    
        write_digit(n%10,n%10+1);
    } 

}

int main() {
    int n;
    while (cin >> n) {
        write_expanded(n);
        cout << endl;
    }
}
