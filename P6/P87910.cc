#include <iostream>
using namespace std;

void morse(char c, int& n){

    if(c == 'a'){

        cout << ".-";

        n+=2;

    } 

    if(c == 'e'){

        cout << ".";

        n++;

    } 
    if(c == 'i'){

        cout << "..";

        n+=2;

    } 
    if(c == 'o'){

        cout << "---";

        n+=3;

    } 
    if(c == 'u'){

        cout << "..-";

        n+=3;

    } 
} 


int main(){

   int n, x = 0;
   
   cin >> n;
   
   char c;
   
   while(cin >> c){

        morse(c, x);
        if(x >= n){
            cout << endl;
            x = 0;


        } 

   } 
    
    cout << (!x ? "" : "\n") << "STOP\n";

} 
