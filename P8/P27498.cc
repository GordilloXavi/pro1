#include <vector>
using namespace std;

typedef vector< vector<int> > Matrix;



void swap(Matrix& m, int i, int j){

    int x = m[i][j];

    m[i][j] = m[j][i];

    m[j][i] = x;


} 

void transpose(Matrix& m){

    int size = m.size();

    for(int i = 0; i<size-1; ++i){

        for(int j = i+1; j<size; ++j){

            swap(m,i,j);

        } 

    } 

} 

