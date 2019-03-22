#include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<int> > Matrix;

int sum_diagonals(const Matrix& mat){

    int n = mat.size();
    int sum = 0;
    for(int i = 0; i<n; ++i){
        sum+= mat[n-1-i][i];
        if(n%2 == 0 or i != n/2)sum += mat[i][i];
    } 
    return sum;

}

int main(){

    int n; 
    while(cin >> n){
        Matrix m(n,vector<int>(n));
        for(int i =0; i<n; ++i)for(int j = 0; j<n; ++j)cin >> m[i][j];

        int x = sum_diagonals(m);
        cout << x << endl;

    } 
} 
