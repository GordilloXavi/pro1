#include<iostream>
using namespace std;

void converge(int n, int& k, int& far){

    k = 0;

    while(n > 1){

        k++;

        if(n>far)far = n;

        if(n%2 == 0)n /= 2;

        else n = n*3 +1;


    } 

    if(n>far)far = n;

} 

int main() {

    int m, p;

    cin >> m >> p;

    int highest = 0;

    for(int i = 1; i<=m; ++i){

        int steps;

        converge(i,steps, highest);

        if(steps >= p)cout << i << endl;

    } 

    cout << "The greatest reached number is " << highest << ".\n";
    

} 
