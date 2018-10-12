#include <iostream>
using namespace std;

int main(){
    
 int n, m, tot;
 tot = 0;
 cin >> n;
 
 while(cin >> m){
     
     if(n != 0 and m%n == 0 )tot++;
     
 }
 cout << tot << endl;
    
    
}