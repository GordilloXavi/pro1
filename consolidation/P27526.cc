#include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<int> > Matrix;

Matrix read(int r, int c){
    Matrix m(r, vector<int>(c));
    for(int i = 0; i<r; ++i)for(int j = 0; j<c; ++j)cin >> m[i][j];
    return m;
} 

void print(const Matrix& m){
    int r = m.size();
    int c = m[0].size();

    cout << "-----\n";
    for(int i = 0; i<r; ++i){
        for(int j = 0; j<c; ++j)cout << m[i][j] << (j==c-1? "" : " ");
        cout << endl;
    } 
} 

void swap(Matrix& m, int a, int b){

    int r = m.size();

    for(int i = 0; i<r; ++i){
        int t = m[i][a];
        m[i][a] = m[i][b];
        m[i][b] = t;
    } 

} 

int main(){
    int r,c;
    cin >> r >> c;
    Matrix m = read(r,c);
    print(m);
    while(cin >> r >> c){
        swap(m, r,c);
        print(m);
    }     
    cout << "-----\n";
} 
