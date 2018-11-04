#include <iostream>
using namespace std;

void info_sequence(int& max, int& lpos){

    max = 0;

    int x;

    int pos = 0;

    while(cin >> x and x != 0){

        pos++;

        if(x >= max){
        
            max = x;

           lpos = pos;

        } 



    } 


} 

int main(){

   int max, lpos;
   
   int n;
   
   int pos2 = -1; 

   info_sequence(max, lpos);

   int pos  = 0;


   while(cin >> n and n != 0){

       pos++;

       if(n == max)pos2 = pos;

   } 

    cout << max << " " << lpos << " ";

    if(pos2 == -1)cout << '-' << endl;
    
    else cout << pos2 << endl; 

} 
