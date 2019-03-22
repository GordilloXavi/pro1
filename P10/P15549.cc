#include <vector>
using namespace std;

void swap(int& a, int& b){

    int t = a;
    a = b;
    b = t;

} 


void bubble_sort(vector<double>& v){

    int sz = v.size();
    int iter = 1;
    bool s = false;
    for(int i = sz-1; i>=0 and not s; --i){
        bool s1 = true;
        for(int j = 0; j<i; ++j){
            if(v[j]>v[j+1]){
                swap(v[j], v[j+1]);
                s1 = false;
            } 
        } 
        s = s1;

        ++iter;
    } 


} 

