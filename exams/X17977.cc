#include<iostream>
using namespace std;


int main() {

   int a,b,count = 0;

   cin >> a >> b;

   bool l = false;

   string s;

    while(cin >> s){

        if(l and s.size()%b == 0){
            
            count ++;
            
            l = (s.size()%a == 0);

        } 
        else l = (s.size()%a==0);

    } 

    cout << count << endl;
} 
