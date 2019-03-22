#include <vector>
using namespace std;

int position_maximum(const vector<double>& v, int m){

    int p = 0;

    for(int i = 1; i<=m; ++i)if(v[i]>v[p])p = i;
    
    return p;

} 

