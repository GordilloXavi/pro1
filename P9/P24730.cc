#include<iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct Teacher{
    
    string name;
    int sweets, carrots;

} ;

bool comp(Teacher& t1, Teacher& t2){

    if(t1.sweets != t2.sweets){
        return t1.sweets > t2.sweets;
    } 
    if(t1.carrots != t2.carrots){
        return t1.carrots > t2.carrots;
    }
    if(t1.name.size() != t2.name.size()){
        return t1.name.size() < t2.name.size();
    }  
    return t1.name < t2.name;
} 

void printNames(vector<Teacher>& v){

    for(int i = 0; i<(int)v.size(); ++i){
        cout << v[i].name << endl;

    } 
    cout << endl;
} 

int main() {

    int n;
    cin >> n;

    for(int i = 0; i<n; ++i){

        int x;
        cin >> x;
        vector<Teacher> teachers(x);

        for(int j = 0; j<x; ++j)cin >> teachers[j].name >> teachers[j].sweets >> teachers[j].carrots;

        sort(teachers.begin(), teachers.end(), comp);

        printNames(teachers);

    } 

} 
