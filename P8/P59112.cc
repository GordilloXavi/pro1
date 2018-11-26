#include<iostream>
#include <vector>
using namespace std;

typedef vector< vector<char> > Matrix;

void display(Matrix& m){

    int n = m.size();

    for(int i = 0; i<n; ++i){
        for(int j = 0; j<n; ++j)cout << m[i][j];
        cout << endl;

    } 
    cout << endl;


} 


int main() {

    int n;

    while(cin >> n and n != 0){

        Matrix m(n, vector<char>(n, '.'));

        int i = n-1, j = 0, x = n, c = 0;


        while(x >= 0){

            for(int k = 0; k<x; ++k){

                m[i][j] = 'X';

                j+= c == 0;
                i-= c == 1;
                j-= c == 2;
                i+= c == 3 and i<n-1;
                j-= j ==n;
                i-= i == n;

            } 

            c++;
            c = c%4;

            x--;

        } 

        m[i][j] = 'X';

        display(m);
    }

} 
