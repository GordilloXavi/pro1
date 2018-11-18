#include<iostream>
using namespace std;

char caesar(int k, char c){



    int x = k%25;

    if('z'-c < k)x--;

    return 'A' + (x)%25;

} 

int main() {

    //int n;
    //char c;

    //cin >> n >> c;

    //cout << caesar(n,c) << endl;



    int k;

    while(cin >> k){

        char c;

        while(cin >> c and c != '.'){

            if(c == '_')cout << ' ';
            else cout << caesar(k,c);
    

        } 
        cout << endl;

    } 

} 
