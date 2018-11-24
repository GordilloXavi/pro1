#include<iostream>
#include <vector>
using namespace std;

typedef vector< vector<char> > Matrix;

void display(Matrix& m){

    int r = m.size();
    int c = m[0].size();

    for(int i = 0; i<r; ++i){
        for(int j = 0; j<c; ++j)cout << m[i][j];
        cout << endl;
    } 


} 

void search_diag(Matrix&m, vector<string> words, int d){

} 

void search_col(Matrix& m, vector<string> words, int c){

} 


void search_row(Matrix& m, vector<string> words, int r){


    for(int i = 0; i<words.size(); ++i){//for each word...

        for(int j = 0;j<= m[0].size()-words[i].size(); ++j){

            bool w = true;

            for(int k = 0; w and k<words[i].size(); ++k){

                w = (words[i][k]==m[r][j+k]);

            } 
            if(w)for(int k = 0; k<words[i].size(); ++k){

                m[r][j+k] -= 32;

            } 

        } 


    } 


} 


int main() {
    
    int x,m,n;

    cin >> x >> m >> n;
    
    vector<string> words(x);

    for(int i = 0; i<x; ++i)cin >words[i];

    Matrix m(m,vector<char>(n));

    for(int i = 0; i<m; ++i)for(int j = 0; j<n; ++j)cin >> m[i][j];


    for(int i = 0; i<m; ++i){
        search_row(m, words, i);
        search_diag(m, words,i);
    }     
    for(int i = 0; i<n; ++i){
        search_col(m,words,i);
        search_diag(m,words,j);

    } 

    display(m);

} 
