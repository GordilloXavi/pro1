#include<iostream>
using namespace std;


int main() {

    int s = 0, m = 0, l = 0;

    char c;
    

    int len = 0;

    while(cin >> c and c != '.'){

        if(c == '-')
        {
           
            if(len < 5 and len > 0)s++;
            else if(len > 9)l++;
            else if(len != 0)m++;
           
            len = 0;

           
        } 
        else{
            
            len++;
    

        } 

    } 
     
            if(len < 5 and len > 0)s++;
            else if(len > 9)l++;
            else if(len != 0)m++;

        cout << s << ',' << m << ',' << l << endl;

} 
