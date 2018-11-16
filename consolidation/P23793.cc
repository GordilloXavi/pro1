#include <iostream>
using namespace std;
int compara(int d1, int m1, int a1, int d2, int m2, int a2){


    if(a1==a2){
        
        if(m1==m2){


            if(d1==d2){

                return 0;
            } return d1>d2 ? 1 : -1;
        } 

        return m1>m2 ? 1 : -1;

    } return a1>a2 ? 1 : -1;


} 

int main(){

    int a,b,c,d,e,f;

    char s;

    while(cin >> a >> s >> b >> s >> c >> d >> s >> e >> s >> f){

        if(compara(a,b,c,d,e,f) == 0)cout << "iguals\n";
        else if(compara(a,b,c,d,e,f) == -1)cout << "anterior\n";
        else cout << "posterior\n";



    } 



        


} 
