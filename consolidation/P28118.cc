#include<iostream>
#include <cmath>
using namespace std;

double dist(double x,double y, double a,  double b){

        return  double(sqrt((x-a)*(x-a) + (y-b)*(y-b)));


} 


int main() {

    cout.setf(ios::fixed);
    cout.precision(4);


   double lx,ly,a,b;

  string city;

     while(cin >> city >> lx >> ly){


    double fx = lx, fy = ly;
   

    double d =0.0;

    bool found = 0;

     while( not found and cin >> a >> b ){
        
        d+= dist(lx,ly,a,b);

        lx = a;
        ly = b;

        found = (a == fx and b == fy);
     } 

     cout << "Route " << city << ": " << d << endl;

     }

} 
