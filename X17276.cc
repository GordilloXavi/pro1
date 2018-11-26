#include<iostream>
#include <vector>
using namespace std;

typedef vector< vector<int> > Matrix;

bool diags(Matrix& m, int r, int c){

    int rows = m.size();
    int cols = m[0].size();

    bool a = true;
    
    int i = r, j = c;

    while(i<rows and j < cols){

        if()

        i++;
        j++;

    } 

} 


void display(Matrix& m){

    int r = m.size();
    int c = m[0].size();

    for(int i = 0; i<r; ++i){
        for(int j = 0; j<c; ++j)cout << m[i][j] << ' ';
        cout << endl;
    } 


} 


int main() {
    
    int r,c;

    while(cin >> r >> c){

        Matrix m(r,vector<int>(c));

        for(int i = 0; i<r; ++i)for(int j = 0; j<c; ++j)cin >> m[i][j];

        int x,y;

        cin >> x >> y;

        if(diags(m,x,y))cout << "yes\n";
        else cout << "no\n";

    } 


} 
