#include <iostream>
using namespace std;



int main() {
    
    int a0, ae, n, d;
    
    cin >> a0>> ae>> n;
    
    bool b = 0;
    
    while(cin >> d){
        
        n-= d;
        
        if(b)n+= ae;
        else n+= a0;
        
        b = !b;
        
        cout << n << endl;
    }
    
    
    
    
}
