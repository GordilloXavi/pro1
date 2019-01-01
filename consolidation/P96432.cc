#include <iostream>
#include <vector>
using namespace std;

struct Person{
    string name, bro;
    int balance;
} ;

void print(vector<Person>& v){
    int s = v.size();
    for(int i = 0; i<s; ++i)cout << v[i].name << ' ' << v[i].balance << endl;
    cout << endl;
} 


int main(){

    int n;
    cin >> n;
    for(int i = 0; i<n; ++i){
        int x;
        cin >> x;
        vector<Person> v;
        for(int j = 0; j<x; j++){
            cin >> v[j].name >> v[j].bro >> v[j].balance;
            v[j].balance *= -1;
        } 
        print(v);
    } 
} 
