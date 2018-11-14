#include <iostream>
using namespace std;


int main() {

        bool ev = 0;
        int sec = 0, n, count = 0, i = 0;

        while(cin >> n){

            if(i == 1)sec = n;

                count += (n == sec and ev);
                ev = !ev;
                ++i;

                }

        cout << count << endl;
} 
