#include <iostream>
#include <vector>
using namespace std;

struct Persona {
         string nom;
         bool dona;
         int edat;
};

void printHoes(int n, vector<Persona>& v){

    int sz = v.size();

    for(int i = 0; i<sz; ++i){
        if(v[i].edat < n)cout << v[i].nom << ' ' << v[i].edat << endl;
    } 
} 


int main(){

    int n;
    cin >> n;
    vector<Persona> people;
    int maxAge = 0;
    for(int i  = 0; i<n; ++i){
       Persona p;
       string s;
       cin >> p.nom >> s >> p.edat;
       if(s == "dona"){
           p.dona = true;
           people.push_back(p);
       } else if(p.edat > maxAge)maxAge = p.edat;
    } 
    printHoes(maxAge, people);
} 
