#include<iostream>
#include <vector>
using namespace std;


int main() {

    string g;

    while(cin >> g){

        vector<int> v(10);

        int s = 0;
        int x;

        for(int i = 0; i<10; ++i){

            if(g[i] >= '0' and g[i] <= '9')v[i] = g[i]-'0';
            else if(g[i] == 'X')v[i] = 10;
            else v[i] == -1;

            if(v[i] != -1){

                if(v[i] == 'X')s+=10;
                else s+= (10-i)*v[i];

            } else x = 10-i;
        } 

        int i;


        for(i = 0; i<=10; ++i){

            if((s+(x*i))%11 == 0)break;


        }

        if(i == 10)cout << 'X' << endl;
        else cout << i << endl;
            



    } 



} 
