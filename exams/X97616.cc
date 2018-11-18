#include<iostream>
using namespace std;


int main() {

    
    string s, last;

    int reps = 1;

    cin >> last;
    
    while(cin >> s){

        if(s == last)reps++;

        else{

            if(reps > 1)cout << last << '*' << reps << " + ";
            else cout << last << " + ";

            reps = 1;

        } 


        last = s;
    }

        if(reps > 1)cout << last << '*' << reps << endl;
        else cout << last << endl;

} 

