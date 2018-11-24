#include<iostream>
#include <vector>
using namespace std;

struct point{
    
    int x;
    int y;

};

int abs(int a){
    return a<0?-a:a; 
} 

int dist(point a, point b){
    


    return (abs(a.x-b.x) + abs(a.y-b.y));


} 


int main() {

    point p;

    cin >> p.x >> p.y;

    int n;

    cin >> n;
    
    vector<point> v(n);

    for(int i = 0; i<n; ++i)cin >> v[i].x >> v[i].y;

    for(int i = 0; i<n; ++i){

        int d = dist(p,v[i]);
        
        cout << "points at distance " << d << endl;

        for(int j = i+1; j<n; ++j){

            if(dist(p,v[j]) == d)cout << v[j].x << ' ' << v[j].y << endl;

        } 


    } 


} 
