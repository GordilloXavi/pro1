#include<iostream>
using namespace std;

bool ham(int n){

    bool d = 0;
    
    for(int i = 2; i<n; ++i){

        if(n%i == 0){

            if(i!= 2 and i!= 3 and i != 5)return 0;

            d = 1;
        } 

    } 

    return d;


} 


int main() {

    cout << ham(12) << endl;

    int n; 

    while(cin >> n){
        
        if(n >= 0)cout << '1';

        int h = 1;

        for(int i = 1; h<n; ++i){
            if(ham(i)){
                cout << ',' << i;
                ++h;
            } 

        } 

        cout << endl;


    } 


}
