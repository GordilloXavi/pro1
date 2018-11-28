//#include <iostream>
#include <vector>
using namespace std;


typedef vector<char> Row;
typedef vector<Row> Rectangle;

int abs(int i){return i<0 ? -i : i;};

void minimal_dimensions(char c, const Rectangle& r, int& rows, int& cols ){

     rows = r.size();
     cols = r[0].size();  
    int inirow = -1, inicol = 0;
    int endrow = 0, endcol = 0;


    for(int i = 0; i< rows; ++i){

        for(int j = 0; j<cols; ++j){

            if(r[i][j] == c and inirow == -1){

                inirow = i;
                inicol = j;
                endrow = i;
                endcol = j;


            } 
            else if(r[i][j] == c){

                if(j<inicol){

                    endcol = inicol;
                    inicol = j;

                } 
                else if(j > endcol)endcol = j;
                endrow = i;
            } 
         
        }


    } 

        rows = 1+abs(inirow - endrow);
        cols = 1+abs(inicol - endcol);

} 
/*
void display(Rectangle& r){

    for(int i = 0; i<10; ++i){
        for(int j = 0; j<10; ++j)cout << r[i][j] << ' ';
        cout << endl;
    } 


} 


int main(){


    Rectangle r(10, Row(10,'.'));

    int i, j;

    while(cin >> i >> j)r[i][j] = 'x';

    minimal_dimensions('x', r, i,j);

    display(r);

    cout << i << ' ' << j << endl;


} 

*/
