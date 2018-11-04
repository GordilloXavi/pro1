#include <iostream>
using namespace std;


int main(){

    int a,b, c = 1;

    while(cin >> a >> b and b != 0){

        
        if(a%b != 0)a = (a-a%b)+b;


        cout << "#" << c << " : " << a << endl;

        c++;

    } 


} 
