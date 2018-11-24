#include<iostream>
#include <vector>
using namespace std;

typedef vector< vector<int> > matrix;

void printrow(matrix& m, int r){

    cout << "row " << r << ":";

    for(int i = 0; i<m[0].size(); ++i){

        cout << ' ' <<  m[r-1][i];

    } cout << endl;

} 


void printcol(matrix& m, int r){

    cout << "column " << r << ":";

    for(int i = 0; i<m.size(); ++i){

        cout << ' ' <<  m[i][r-1];

    } cout << endl;

} 


int main() {

    int r,c;

    cin >> r >> c;

    matrix m(r, vector<int>(c));

    for(int i = 0; i<r; ++i){

        for(int j = 0; j<c; ++j)cin >> m[i][j];

    }   

    string s;

    while(cin >> s){

        if(s == "row"){
            cin >> r;
            printrow(m,r);
        }     
        else if(s == "column"){
            cin >> c;
            printcol(m,c);
        } 
        else{
            cin >> r >> c;

            cout << "element " << r << " " << c << ": " << m[r-1][c-1] << endl;
        } 

  }   
    


} 
