#include <iostream>
using namespace std;

struct Stamps {
     int stamp7;
     int stamp4;
};

Stamps min_stamps(int n){

    if(n%7 == 0){
        Stamps s;
        s.stamp7 = n/7;
        return s;
    }
    else {
        Stamps s = min_stamps(n);
        s.stamp4 = (n-s.stamp7*7)/4;
        return s;
    } 
    
} 

Stamps f(int n){

    Stamps s;
    s.stamp7 = n/7;
    while((n-s.stamp7)%4 != 0){
        s.stamp7--;
    } 
    s.stamp4 = (n-s.stamp7*7)/4; 
    return s;
} 

int main(){

    int n;
    while(cin >> n){
        Stamps x = f(n);
        cout << x.stamp7 << ' ' << x.stamp4 << endl;
    } 

} 
