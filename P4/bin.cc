#include <iostream>
using namespace std;

void bin(int n){

    if(n<2)cout << n << endl;
    else{
    cout << n%2;
    bin(n/2);
    }


}





int main(){


    int n;
    
    cin >> n;
    
    bin(n);

}
