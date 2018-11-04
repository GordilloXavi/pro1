#include <iostream>
using namespace std;


int main(){

    char c;

    bool end = 0;

    while(cin >> c and c != '.' and not end)if(c == 'a')end = 1;
        
    if(end)cout << "yes\n";
    else cout << "no\n";




} 
