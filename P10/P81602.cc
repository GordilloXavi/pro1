#include <vector>
#include <iostream>
using namespace std;

int pos_max(const vector<double>& v, int m){

    int p = 0;

    for(int i = 1; i<=m; ++i)if(v[i]>v[p])p = i;
    
    return p;

} 


void swap(double& a, double& b){

    double t = a;
    a = b;
    b = t;

} 

void selection_sort(vector<double>& v, int m){

    if(m > 0){
    int i = pos_max(v,m);
    swap(v[m],v[i]);
    if(m>0)selection_sort(v,m-1);
    }
} 
/*
int main(){

    int n;
    cin >> n;

    vector<double> v(n);
    for(int i = 0; i<n; ++i)cin >> v[i];

    cin >> n;

    selection_sort(v,n);

    for(int i = 0; i<v.size(); ++i)cout << v[i] << " ";
   cout << endl; 

} */
