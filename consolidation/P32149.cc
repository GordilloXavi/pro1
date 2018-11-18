#include<iostream>
using namespace std;

bool upward(int n){

    if(n < 10)return true;

    if(n%10 != ((n%100/10)+1)%10)return 0;

    return upward(n/10);


} 

int main() {

    int n;

    bool up = 0;

    bool foud = false;

    while(cin >> n and not foud){
        
        if(up and upward(n)){
            cout << "YES\n";
            foud = true;
        } 
        up = upward(n);
    } 

    if(not foud)cout << "NO\n";


} 
