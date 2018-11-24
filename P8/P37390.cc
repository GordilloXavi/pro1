#include <vector>
using namespace std;

typedef vector< vector<int> > Matrix;

Matrix product(const Matrix& a, const Matrix& b){

    int s = a.size();

    Matrix m(s, vector<int>(s));

    for(int i = 0; i<s; ++i){

        for(int j = 0; j<s; ++j){

            int sum = 0;
    
            for(int k = 0; k<s; ++k){

                sum+= a[i][k]*b[k][j];

            } 

            m[i][j] = sum;



        } 

    } 

    return m;
} 
