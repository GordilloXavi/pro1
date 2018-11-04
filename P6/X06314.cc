#include <iostream>
using namespace std;

void info_sequence(int& sum, int& last){

   int l;

    while(cin >> last and last != 0){
        
        l = last;    
        sum+=last;
    
     } 
    
    last = l;

} 

int main(){

    int n = -1, sum = 0, last;
    int sum1, last1;

    info_sequence(sum,last);


    int S = 1;

    while(cin >> n and n != 0){

        sum1 = n;

        info_sequence(sum1,last1);

        if(sum == sum1 and last == last1)S++;



    } 
    

    if(n != -1)cout << S << endl;


} 
