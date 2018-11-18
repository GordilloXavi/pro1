#include<iostream>
using namespace std;

int digit_comp(int d, int x, int y){

    if(x<10){

        if((y != d and x != d) or x == y)return 0;
        return 1+(y%10 == d);
    } 
    
    if(x%10 != d and y%10 != d)return digit_comp(d,x/10,y/10);
    
    else if(x%10 == y%10)return 0;

    else return 1+(y%10 == d); 


} 


int main() {
    int d, x, y;
    while (cin >> d >> x >> y) {
        cout << digit_comp(d, x, y) << endl;
    }
}
