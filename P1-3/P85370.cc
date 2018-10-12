#include <iostream>
#include <math.h>
using namespace std;


int main() {

    double c, i, t;
    
    string s;
    
    cin >> c >> i >> t >> s;
    
         cout.setf(ios::fixed);

    cout.precision(4);
    cout << ((s == "simple") ? double(c + c*(i*t/100)) : double(c*pow(1+i/100,t))) << endl;
    

}