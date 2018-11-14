#include<iostream>
using namespace std;


int main() {

    
    string first, s = "", l;

    cin >> first;

    l = first;
    
    int max = 1, newmax = 1;

    while(cin >> s){

        if(s == first and s == l)newmax++;
        else if(s == first and s!= l)newmax = 1;
        else if(s != first and l == first){
            if(max < newmax)max = newmax;
            newmax = 0;
        } 

        l = s;
    } 

    if(max < newmax)max = newmax;

    cout << max << endl;



} 
