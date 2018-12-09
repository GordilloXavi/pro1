#include<iostream>
#include <vector>
using namespace std;

typedef vector <vector<char> > Matrix;

struct Coord {
    int x,y;

};

void nextD (Coord& p, int n){
    
    if(p.y == n-1 and p.x == n-1){

        p.y = 0;
        p.x = 0;

    } 
    else if(p.y == 0){// only if n = 1

        if(p.x == n-1){
         p.y = n-1;
         p.x = 1;
        }
        else{
        p.y = p.x+1;
        p.x = 0;
        }

    } else if(p.x == n-1){
        
        if(p.y == 0){
            p.y = n-1;
            p.x = 1;
        } else{
        p.x = p.y+1;
        p.y = n-1;
        }
    } 
    else{
    p.x++;
    p.y--;
    }

} 

int main() {

   int d,n,l,f,c;

    while(cin >> d >> n >> l >> f >> c){

        Matrix m (d, vector<char>(d));

        for(int i = 0; i<d; ++i)for(int j = 0; j<d; ++j)cin >> m[i][j];

        Coord coord;
        coord.x = c;
        coord.y = f;
        char last = m[coord.y][coord.x];
        cout << m[coord.y][coord.x];

        for(int i = 1; i<l; ++i){
            for(int j = 0; j<=n; ++j){
                nextD(coord, d);
            } 
            if(m[coord.y][coord.x] == 'X' and last == 'X')cout << ' ';
            else if(last == 'X')cout << m[coord.y][coord.x];
            else if(m[coord.y][coord.x] != 'X')cout << m[coord.y][coord.x];

            last = m[coord.y][coord.x];
        } 
        cout << endl;
    }  

} 
