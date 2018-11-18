#include<iostream>
using namespace std;

bool is_happy(int n){


    int x = 0;

    while(n>0){

        x+= (n%10)*(n%10);
        n /= 10;

    } 

    if(x<10){
        
        return (x == 1);

    } 

    return is_happy(x);
} 

int main() {

   int n = -1, h = 0, s = 0;


  while(cin >> n){

        if(is_happy(n)){
            cout << n << " is a happy number\n";
            h++;
        } else{
            cout << n << " is a sad number\n";
            s++;
        } 


  }  

  if(n!= -1)cout << endl << "happy numbers: " << h << endl << "sad numbers: " << s << endl;

} 
