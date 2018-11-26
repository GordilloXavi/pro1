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

        int i = n-1, j = 0, x = n;
        int c = 0;


        while(x >= 0){

            for(int k = 0; k<x; ++k){

                m[i][j] = 'X';

                if(c == 0)++j;
                if(c == 1)--i;
                else if(c == 2)--j;
                else if(c == 3 and i < n-1)++i;

                if(j == n)j--;
                if(i == n)i--;

            } 

            c++;
            c = c%4;

            x--;

        } 

        m[i][j] = 'X';

        display(m);
    }

} 
