#include<iostream>
using namespace std;

 int concatenacio(int a, int b){

    if(b == 0 and a > 0)return a%10 + 10*concatenacio(a/10,b);
    if(a>0 and b>0)return b%10 + 10*concatenacio(a,b/10); 
    if(a == 0 and b == 0)return 0;
    else return b%10 + 10*concatenacio(a,b/10);

} 


int main() {

    int a,b;

    while(cin >> a >> b)cout << concatenacio(a,b) << endl;    


} 
