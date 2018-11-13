#include<iostream>
using namespace std;


int main() {

    int n;

    while(cin >> n){

        int x;
        int count = 1;

        bool found = 0;
        while(cin >> x and x != -1){

                if(count == n){
                    found = 1;
                    cout << "At the position " << n << " there is a(n) " << x << ".\n";
                } 

                count++;

      }if(not found)cout << "Incorrect position.\n"; 

  }  

} 
