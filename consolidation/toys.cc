#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct Toy {

    string name;
    string toy;
    int reps;

} ;


bool func(Toy& a, Toy& b){
        
    if(a.name == b.name)return a.toy < b.toy;
    return a.name < b.name;
} 


int main() {

    int n;
    cin >> n;
    vector<Toy> toysList;
    for(int i = 0; i<n; ++i){
       Toy t;
        cin >> t.name >> t.toy;
        t.reps = 1;
       //searchToy(toysList, t); 
    bool found = false;
    int s = toysList.size();
    for(int j = 0; j<s; ++j){
       if(toysList[j].name == t.name and toysList[j].toy == t.toy){
            toysList[j].reps++;
            found = true;
       }  
    } 
    if(not found)toysList.push_back(t);


    } 
    sort(toysList.begin(), toysList.end(), func);
    int tl = toysList.size();
    for(int i = 0; i<tl; ++i){
        cout << toysList[i].name << ' ' << toysList[i].toy << ' ' << toysList[i].reps << endl;
    } 
} 
