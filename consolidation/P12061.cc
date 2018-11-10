#include<iostream>
using namespace std;


int main() {

    string s;

    int n = -1;

    bool beg = 0;

    while(cin >> s and s != "end"){

            if(beg)n++;
            if(s == "beginning"){

                beg = 1;
                n = 0;

            }

    }  

    if(s == "end" and n != -1)cout << n << endl;
    else cout << "wrong sequence\n";

} 
