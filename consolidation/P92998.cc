#include<iostream>
using namespace std;

void words(int n){

    string s;

    if(cin >> s){

        if(n>0){
            words(n-1);

            cout << s << endl;
        } 

    }

} 

int main() {

    
    int n;

    cin >> n;

    words(n);


} 
