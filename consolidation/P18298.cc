#include<iostream>
using namespace std;

string toString(int n){

    string s = "";

    int x = 0;

    while(n>0){

        
        x = 10*x + n%10;

        n/= 10;
    } 

    while(x>0){

        s+= x%10;
        x/= 10;

    }

    return s;

} 

string roman(int n){

    string s = toString(n);

    string num = "";

    for(int i = 0; i<s.size(); ++i){

        

        
    } 
    


} 


int main() {

     

} 
