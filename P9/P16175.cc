#include <iostream>
#include <vector>
using namespace std;

struct Pair{
    int value,pos;
} ;

typedef vector<Pair> Com_Vec;

void sum(Com_Vec& v1, Com_Vec& v2){

    Com_Vec res;

    int i = 0, j = 0;

    while(i<v1.size() and j<v2.size()){

        if(v1[i].pos == v2[j].pos){
            Pair p;
            p.value = v1[i].value+v2[j].value;
            p.pos = v1[i].pos;
            res.push_back(p);
        } 
        else if(v1[i].pos < v2[j].pos){
            res.push_back(v1[i]);
            i++;
        } 
        else{
            res.push_back(v2[j]);
            j++;
        } 

    } 
    while(i<v1.size()){
        res.push_back(v1[i]);
        i++;
    } 
    while(j<v2.size()){
        res.push_back(v2[j]);
        j++;
    } 
    
    cout << res.size();
    for(int i = 0; i<res.size(); ++i){
       cout << ' ' << res[i].value << ';' << res[i].pos; 
    } cout << endl;
} 

int main() {

    int n;
    cin >> n;
    for(int i = 0; i<n; ++i){

        int x;
        cin >> x;
        Com_Vec v(x);
        char c;
        for(int i = 0; i<x; ++i)cin >> v[i].value >> c >> v[i].pos;
        cin >> x;
        Com_Vec v2(c);
        for(int i = 0; i<x; ++i)cin >> v2[i].value >> c >> v2[i].pos;

        sum(v,v2);

    } 


} 
