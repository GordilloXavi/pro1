#include <iostream>
using namespace std;

int main(){

    int n;
    int pos = 0;
    bool ev = 1;

    while(ev and cin >> n){

        ev = n%2;

        pos++;

    } 

    cout << pos << endl;

} 
