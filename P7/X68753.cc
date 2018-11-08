#include <iostream>
#include <vector>
using namespace std;

void moda(int n){
    
    vector<int> V(n);

    for(int i = 0; i<n; ++i)cin >> V[i];

    vector<int>rank;
    vector<int>occs;

    for(int i = 0; i<n; ++i){

        bool found = false;

        for(int j = 0; j<rank.size() and not found; ++j){

            if(V[i] == rank[j]){
                occs[j]++;
                found = true;
            } 
        } 
        if(not found){
            rank.push_back(V[i]);
            occs.push_back(1);
        } 

    } 

    int max = 0;//highest number
    int m = 0;//most occurences

    for(int i = 0; i<occs.size(); ++i){

        if(occs[i] >= m){
            if(max < rank[i])max = rank[i];
            m = occs[i];
        } 

        cout << max << endl;
        

    } 

} 

int main(){

    int n;

    while(cin >> n){

        moda(n);

    } 

} 
