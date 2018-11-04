#include <iostream>
using namespace std;



int main(){

    int n;

    while(cin >> n){

        int x;
        int count = 0;
        int num = -1;
        while(cin >> x and x != -1){

            count++;

            if(count == n)num = x;


        } 

        if(num == -1)cout << "Incorrect position.\n";

        else printf("At the position %d there is a(n) %d.\n", n, num);


    } 

}

