#include <iostream>
#include <vector>
using namespace std;

void print(const vector<string>& v){
    int s = v.size();
    for(int i = 0; i<s; ++i){
        cout << v[i];
        if(i != s-1)cout << ',';
    } cout << endl;
} 

void sort(vector<string>& v){
    int s = v.size();

    for(int i = 1; i<s; ++i){
        string x = v[i];
        int j = i-1;
        while(j >= 0 and x<v[j]){
            v[j+1] = v[j];
            j--;
        }v[j+1] = x; 
        
    } 
} 

int main(){
    int n;
    cin >> n;
    vector<string> v(n);
    for(int i = 0; i<n; ++i)cin >> v[i];
    sort(v);
    print(v);
} 
