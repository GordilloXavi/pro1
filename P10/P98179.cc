#include <vector>
using namespace std;

void insert(vector<double>& v){

    int sz = v.size();

    if(sz > 1 and v[sz-1]<v[sz-2]){
        
        double n = v[sz-1];
        int i = sz-2;
        while(n<v[i] and i >= 0){
            
            v[i+1] = v[i];
            i--;

        } v[i+1] = n;

    } 

} 
