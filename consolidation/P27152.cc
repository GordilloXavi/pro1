#include<iostream>
using namespace std;

int value(char c){

   


} 

int main() {

    char c;

    int s= 0;

    while(cin >> c){

if(c == 'a' or c == 'e')s++;
else if(c == 'o' or c == 's')s+=2;
        else if(c == 'd' or c == 'i' or c == 'n' or c == 'r')s+=3;
        else if(c == 'c' or c == 'l' or c == 't' or c == 'u')s+=4;
        else if(c == 'm' or c == 'p')s+=5;
        else if(c == 'b' or c == 'f' or c == 'g' or c == 'h' or c == 'j' or c == 'q' or c == 'v' or c == 'x' or c == 'y' or c == 'z') s+=6;
        else if(c == 'k' or c == 'w')s+=7;





    } 

    cout << s << endl;

} 
