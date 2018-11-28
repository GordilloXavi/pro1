#include <iostream>
#include <vector>
using namespace std;

typedef vector< vector<bool> > Board;


void place(Board& board,char  row, int col, int size, char orientation){


        for(int i = 0; i<size; ++i){

            if(orientation == 'v')board[row-'a'+i][col-1] = true;
            else if(orientation == 'h')board[row-'a'][col-1+i] = true;

        } 

} 

int abs(int i){return i<0 ? -i : i;}

int dist(Board& b, int row, int col){

    int d = 1;
    int count = 0;

    while(col+d < 10 or row+d < 10 or row-d>=0 or col-d>=0){

        for(int i = 0; i< 3+ 2*count; ++i){

            if(row-d+i >= 0 and row-d+i <10)for(int j = 0; j<3 + 2*count; ++j){

                if(col-d+j >= 0 and col-d+j < 10 and b[row-d+i][col-d+j])return d;
                


            } 


        } count++;
        d++;
        

    } 

    return -1;


} 

void show_move(Board& b, char row, int col){

    cout << row << col;

    if(b[row-'a'][col-1] == true)cout << " touched!\n";
    else {

        cout << " water! closest ship at distance " << dist(b, row-'a', col-1) << endl;


    } 


} 


void display(Board& b){

    cout << "  ";
    for(int i = 1; i<=10;++i)cout << i;
    cout << endl;
    for(int i = 0; i<10; ++i){

        cout << char('a'+i) << ' ';

        for(int j =0; j<10; ++j)cout << (b[i][j] == 1 ? 'X' : '.');
        cout << endl ;

    }cout << endl; 

} 


int main() {

    Board board(10, vector<bool>(10, false));    
    
    char row,  orientation;
    int col,  size;

    for(int i = 0; i<10; ++i){

        cin >> row >> col >> size >> orientation;

        place(board, row, col, size, orientation);

    } 

    display(board);

    while(cin >> row >> col){

        show_move(board, row, col);

    } 

} 
