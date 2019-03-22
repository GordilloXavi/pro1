#include <iostream>
#include <vector>
using namespace std;

typedef vector< vector<bool> > Board;

Board readBoard(int r, int c){

    Board b(r, vector<bool>(c));
    char l;
    for(int i = 0; i<r; ++i){
        for(int j = 0; j<c; ++j){
            cin >> l;
            b[i][j] = l == 'B';
        } 
    } 

    return b;

} 

void printBoard(Board& b, int r, int c){

   for(int i = 0; i<r; ++i){
        for(int j = 0; j<c; ++j){
            if(b[i][j])cout << 'B';
            else cout << '.';
        } cout << endl;
   } 
} 

bool evolve(Board& b, int i, int j, int r, int c){
    
    bool upper = i == 0;
    bool lower = i == (r-1);
    bool left = j == 0;
    bool right = j == (c-1);
    int neighbors = 0;

    if( !upper and !left and b[i-1][j-1])neighbors++;
    if( !upper and b[i-1][j])neighbors++;
    if( !upper and !right and b[i-1][j+1])neighbors++;
    if( !left and b[i][j-1])neighbors++;
    if( !right and b[i][j+1])neighbors++;
    if( !lower and !left and b[i+1][j-1])neighbors++;
    if( !lower and b[i+1][j])neighbors++;
    if( !lower and !right and b[i+1][j+1])neighbors++;

    if(!b[i][j] and neighbors == 3)return true;
    if(b[i][j] and (neighbors == 2 or neighbors == 3))return true;
    return false;
} 

void iterate(Board& b, int r, int c){
    Board b2 = b;
    for(int i = 0; i<r; ++i){
        for(int j = 0; j<c; ++j)b2[i][j] = evolve(b, i,j, r,c);
    } 
    b = b2;

} 

int main(){

    int r,c;
    bool first = true;     
    while(cin >> r >> c and r!=0 and c!=0){
        if(not first)cout << endl;
        first = false;
        Board b = readBoard(r,c);

        iterate(b,r,c);
        printBoard(b, r,c);
    } 
} 
