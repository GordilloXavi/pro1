#include <iostream>
using namespace std;



void llegeix_hora(int& h, int& m, int& s){

    h = m = s = 0;

    char c;

    cin >> c;

    while(cin >> c and c != '|'){

        h*=2;        

        if(c == '*'){
            
            h++;

        }
    
         
    } 

    while(cin >> c and c != '|'){

        m*=2;        
        
        if(c == '*'){
            
            m++;

        }
    
         
    } 

    while(cin >> c and c != '|'){

        s*=2;        

        if(c == '*'){
            
            s++;

        }
    
         
    } 


} 

void escriu_hora(int h, int m, int s){

    printf("%d:%d:%d\n", h, m, s);

} 



int main(){


    int n;

    cin >> n;

    int h,m,s;

    for(int i =0; i<n; ++i){

        llegeix_hora(h,m,s);

        escriu_hora(h,m,s);


    } 



} 
