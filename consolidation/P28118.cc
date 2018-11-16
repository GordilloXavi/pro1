#include<iostream>
#include <cmath>
using namespace std;

double dist(double x,double y, double a,  double b){

        return  double(sqrt((x-a)*(x-a) + (y-b)*(y-b)));


} 


int main() {

    
    string s;

    double x,y, fx,fy;


    while(cin >> s >> fx >> fy){

  double lx = fx, ly = fx;

    double d = 0;

    while(cin >> x >> y and (x != fx or y != fy)){


        d+=double(dist(lx,ly,x,y));

        lx = x;
        ly = y;

    } 

    cout.setf(ios::fixed);

    cout.precision(4);

    cout << "Route " << s  << ": " << d << endl;
    }
} 
