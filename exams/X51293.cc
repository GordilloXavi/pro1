#include<iostream>
#include <vector>
using namespace std;

double avg(vector<int>& v){
    
    int s = v.size();

    double x = 0;

    for(int i = 0; i<s; ++i)x+= v[i];

    return x/s;


} 


int main() {

    
    int n;

    while(cin >> n){

        vector<int> v(n);

        for(int i = 0; i<n; ++i)cin >> v[i];

        int a = int(avg(v));

        bool found = false;

        for(int i = v.size()-1; i>=0 and not found; --i){
            
            if(v[i] == a){
                cout << i << endl;
                found = true;
            } 
        } 

        if(not found)cout << n << endl;


    } 

} 
