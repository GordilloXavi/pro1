#include <iostream>
#include <vector>
using namespace std;

struct Person{
    string name;
    int age;
} ;

void swap(Person& a, Person& b){
    Person t = a;
    a = b;
    b = t;
} 

void sort(vector<Person>& v){

    int s = v.size();
    bool sorted = false;
    for(int i = 0; i<s-1 and not sorted; ++i){
        sorted = true;
        for(int j = 0; j<s-1-i; ++j){
            if(v[j].age < v[j+1].age or (v[j].age == v[j+1].age and v[j].name > v[j+1].name)){
                swap(v[j], v[j+1]);
                sorted = false;
            } 
        } 
    } 
} 

vector<Person> read(int n){
   vector<Person> v(n);
  for(int i = 0; i<n; ++i)cin >> v[i].name >> v[i].age; 
  return v;
} 

void print(vector<Person>& v){
    int s = v.size();
    for(int i = 0; i<s; ++i)cout << v[i].name << ' ' << v[i].age << endl;
} 

int main(){

    int n;
    cin >> n;
    vector<Person> v = read(n);
    sort(v);
    print(v);
} 
