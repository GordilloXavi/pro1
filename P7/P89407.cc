#include <iostream>
#include <vector>
using namespace std;

string toB(int n, int b){
    
   string num = "";
   
   while(n > b){

        if(b>10 and n >= 10)num+= char('A'+ n%b);
        else num += char('0'+ n%b);

        n /= b;


   }

    cout << num << endl;

   num += n;

   string ret = "";

   for(int i = num.size()-1; i>=0; --i){

        ret[0] = num[num.size()-1-i];
        


   }

   return ret;


}

int main(){

    int a,b;
    
    while(cin >> a >> b){

        cout << toB(a,b);




    }

    


}
