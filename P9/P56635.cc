#include<iostream>
using namespace std;

struct Rectangle {
         int x_left, x_right, y_down, y_up;
};

void read(Rectangle& r){

    cin >> r.x_left >> r.x_right >> r.y_down >> r.y_up;

} 

bool isInside(const Rectangle& r1, const Rectangle& r2){

    return r2.x_left < r1.x_left and r2.x_right>r1.x_right and r2.y_up > r1.y_up and r2.y_down < r1.y_down;

} 

bool notIntersect(const Rectangle& r1,const Rectangle& r2){

    if( (r1.x_right < r2.x_left) or (r2.x_right < r1.x_left) )return true;

    if( (r1.y_down > r2.y_up) or (r2.y_down > r1.y_up) )return true;
}

int relationship(const Rectangle& r1, const Rectangle& r2){

    if(r1.x_left == r2.x_left and r1.x_right == r2.x_right and r1.y_down == r2.y_down and r1.y_up == r2.y_up)return 4;
    if(isInside(r1,r2))return 1;
    if(isInside(r2,r1))return 2;
    if(notIntersect(r1,r2))return 0;
    return 3;

} 


int main() {

    int n,x;
    cin >> n;
    Rectangle r, r2;
    for(int i = 0; i<n;++i){

      read(r);
      read(r2); 

      int rel = relationship(r,r2);

      if(rel == 0)cout << "rectangles do not intersect\n";
      else if(rel == 1)cout << "the first rectangle is inside the second one\n";
      else if(rel == 2)cout << "the second rectangle is inside the first one\n";
      else if(rel == 4)cout << "rectangles are identical\n";
      else cout << "rectangles intersect\n";

    } 
    

} 
