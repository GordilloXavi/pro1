#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct Toy {

    string name;
    string toy;
    int reps;

} ;

void searchToy(vector<Toy>& toys, Toy& t){

    int s = toys.size();
    for(int i = 0; i<s; ++i){
       if(toys[i].name == t.name and toys[i].toy == t.toy){
            toys[i].reps++;
            return;
       }  
    } 
    toys.push_back(t);
} 

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
       searchToy(toysList, t); 

    } 
    sort(toysList.begin(), toysList.end(), func);
    int tl = toysList.size();
    for(int j = 0; j<tl; ++j){
        cout << toysList[j].name << ' ' << toysList[j].toy << ' ' << toysList[j].reps << endl;
    } 
} 
