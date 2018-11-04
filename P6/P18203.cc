#include <iostream>

using namespace std;

bool ferm(int x, int y){

    int z = x*x*x + y*y*y;

    for(int i = max(x,y); i*i*i<=z; ++i){

        if(i*i*i == z)return true;

    } 

    return false;

} 


int main(){

    int a,b,c,d;
    
    int x,y,z;

    bool F = false;
    bool found = false;

    while(cin >> a >> b >> c >> d){

        found = false;

        for(int i = a; i<=b and not found; ++i){
            for(int j = c; j<=d and not found; ++j){

                if(ferm(i,j)){
                    F = true;
                    found = true;

                    x = i;
                    y = j;
                    z = x*x*x + y*y*y;
                    

                } 

            } 

        } 




    } 

    if(not F)cout << "No solution!\n";

    else printf("%d^3 + %d^3 = %d^3\n", x, y, z);


} 
