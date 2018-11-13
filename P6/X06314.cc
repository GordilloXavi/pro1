#include<iostream>
using namespace std;

void info_sequence(int& sum, int& last){


    sum = 0;
    int x;

    while(cin >> x and x != 0){

        sum += x;
        last = x;


    } 



} 


int main() {

    int sum, last, tot = 0, n;

    info_sequence(sum,last);

    printf("Sum = %d, last = %d\n", sum, last);
    
    while(cin >> n and n!= 0){

        int s = 0, l, x;

        while(cin >> x and x != 0){

            s += x;

            l = x;
        } 
        

        printf("S = %d, l = %d\n", s, l);

        if(s == sum and l == last)tot++;


    }     

    cout << tot << endl;
        

} 
