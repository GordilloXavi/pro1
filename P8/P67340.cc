#include<iostream>
#include <vector>
using namespace std;

typedef vector< vector<char> > Matrix;

void diag(Matrix& board, int r, int c, int& x, int& y, int i, int j){

    bool bishop = false;

    y = r+i; x = c+j;

    while(y>=0 and x >=0 and y < (int)board.size() and x < (int)board[0].size() and not bishop){

        bishop = board[y][x] == 'X';

        if(not bishop){
            x+=j;
            y+=i;
        }

    } 

    if(not bishop){
        x = -1;
        y = -1;
    } 

} 


int main() {

    int r,c;

    cin >> r >> c;

    Matrix board(r, vector<char>(c));

    for(int i = 0; i<r; ++i){
        for(int j = 0; j<c; ++j)cin >> board[i][j];
    } 

    for(int  i = 0; i<r; ++i){
        
        for(int j = 0; j<c; ++j){

                if(board[i][j] == 'X'){
                int x, y;

                diag(board, i, j, x,y, 1,1);
                

                if(x >= 0)cout << '(' << 1+i << ',' << 1+j << ")<->(" << 1+y << ',' << 1+x << ")\n";
                diag(board, i, j, x,y, -1,1);

                if(x >= 0)cout << '(' << 1+i << ',' << 1+j << ")<->(" << 1+y << ',' << 1+x << ")\n";
                diag(board, i, j, x,y, 1,-1);

                if(x >= 0)cout << '(' << 1+i << ',' << 1+j << ")<->(" << 1+y << ',' << 1+x << ")\n";
                diag(board, i, j, x,y, -1,-1);

                if(x >= 0)cout << '(' << 1+i << ',' << 1+j << ")<->(" << 1+y << ',' << 1+x << ")\n";
            }
        } 


    } 


} 
