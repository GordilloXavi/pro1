#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void merge(vector<int>& v, int l, int r, int m){
    int s = v.size();
   vector<int> aux = v; 
    int k = l;
   int i = l, j = m;
   while(i < m and j < r){
        if(v[i] < v[j])
   } 

} 

void merge_sort(const vector<int>& v, int l, int r){
   
    if(r == l)return; 
    int m = (r+l)/2;
    
    merge_sort(v, l, m);
    merge_sort(v, m+1, r);
    merge(v, l, r, m);

} 

void swap(int& i, int& j){
    int t = i;
    i = j;
    j = t;
} 

int min(vector<int>& v, int x){

    int s = v.size();
    int min = x;
    for(int i = x+1; i<s; ++i){
        if(v[i] < v[x])min = i;
    } 
    return min;

} 

void selection_sort(vector<int>& v){
    int s = v.size();
    for(int i = 0; i<s-1; ++i){
        int j = min(v,i);
        if(i!= j)swap(v[i], v[j]);
    } 
} 

void bubble_sort(vector<int>& v){
    int s = v.size();

    bool sorted = false;
    for(int i = 0; i<s-1 and not sorted; ++i){
        sorted = true;
        for(int j = 0; j<s-1; ++j){
            if(v[j]>v[j+1]){
                sorted = false;
                swap(v[j], v[j+1]);
            } 
        } 
    } 
} 

int binary_search(const vector<int>& v, int x){
    int l = 0, r = v.size()-1, m = -1;

    while(l<r){
        m = (l+r)/2;
        if(v[m] > x)r = m-1;
        else if(v[m] < x)l = m+1;
        else return m;
    } 
    if(v[m] == x)return m;
    else return -1;
} 


void print_vector(const vector<int>& v){
    
    int s = v.size();
    if(s > 0)cout << v[0];
    for(int i = 1; i<s; ++i)cout << ',' << v[i];
    cout << endl;
} 


int main(){

    int n;
    cin >> n;
    vector<int> v(n);
    for(int i =0 ;i<n; ++i)cin >> v[i];
    //print_vector(v);
    bubble_sort(v);
    print_vector(v);


} 
