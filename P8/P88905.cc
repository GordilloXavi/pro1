#include <vector>
using namespace std;

typedef vector< vector<int> > Matrix;

Matrix product(const Matrix& a, const Matrix& b){


    int s = a[0].size();
    int p = a.size();
    int r = b[0].size();

    Matrix m(p, vector<int>(r,0));

    for(int i = 0; i<p; ++i){

        for(int j = 0; j<r; ++j){

            for(int k = 0; k<s; ++k){

                m[i][j] += a[i][k] * b[k][j];

            } 

        } 

    } 

    return m;
} 
