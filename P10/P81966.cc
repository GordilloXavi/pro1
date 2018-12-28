#include <vector>
#include <iostream>
using namespace std;

int position(double x, const vector<double>& v, int left, int right){

    int m = (left + right)/2;

    if(left>right or v.size() == 0)return -1;
    

    if(v[m]>x)return position(x,v,left,m-1);
    if(v[m]<x)return position(x,v,m+1,right);

    return m;

} 

/*int main() {

    int n;
    cin >> n;
    vector<double> v(n);
    for(int i = 0; i<n; ++i)cin >> v[i];

    cout << position(1,v,0,v.size()) << endl;


} */
