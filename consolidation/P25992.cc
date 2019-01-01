#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void printE(vector<int>& v){
    int s = v.size();
    bool f = true;
    for(int i = 0; i<s; ++i){
        if(v[i]%2 == 0){
            cout << (not f ? " " : "") << v[i];
            f = false;
        } 
       
    } 
    cout << endl;
} 


void printO(vector<int>& v){
    int s = v.size();
    bool f = true;
    for(int i = s-1; i>=0; --i){
        if(v[i]%2 == 1){
            cout << (not f ? " " : "") << v[i];
            f = false;
        } 
       
    } 
    cout << endl;
} 

int main(){
    int n;

    while(cin >> n and n!= 0){
        vector<int> v(1,n);
        while(cin >> n and n!=0){
            v.push_back(n);
        }         
        sort(v.begin(), v.end());
        printE(v);
        printO(v);
    } 

} 
