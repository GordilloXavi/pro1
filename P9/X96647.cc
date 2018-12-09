#include <iostream>
#include <vector>
using namespace std;

struct Point{
    double x,y;
} ;

bool barycenter (const vector<Point>& v, bool& S, double& barX, double& barY){

    double avX = 0, avY = 0;

    for(int i = 0; i<(int)v.size(); ++i){
        avX += v[i].x;
        avY += v[i].y;
    } 

    avX /= v.size();
    avY /= v.size();

    S = avX == avY;
    
    barX = avX; barY = avY;

    for(int i = 0; i<(int)v.size(); ++i)if(v[i].x == avX and v[i].y == avY)return true;
    return false;
} 

bool dif(vector<Point>& v){

    for(int i = 1; i<(int)v.size(); ++i){
        if(v[i].x != v[0].x or v[i].y != v[0].y)return true;
    } 
    return false;

} 

int main() {

    cout.setf(ios::fixed);
    cout.precision(2);

    int n;

    while(cin >> n){

        vector<Point> points(n);

        for(int i = 0; i<n; ++i)cin >> points[i].x >> points[i].y;

        bool S = 0;
        double barX, barY;

        bool bari = barycenter(points, S, barX, barY);

        cout << "barycenter: (" << barX << ',' << barY << ')' << endl;

        if(not dif(points))cout << "property 1 does not hold\n";
        else if(not S)cout << "property 2 does not hold\n";
        else if(bari)cout << "property 3 does not hold\n";
        else cout << "normalized vector\n";
        
    } 


} 
