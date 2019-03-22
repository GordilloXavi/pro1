#include <iostream>
#include <list>
using namespace std;


struct S{
    int min, max;
    double avg;
} ;

double calc_avg(const list<int>& l){
    int n = 0;
    double sum = 0;
    list<int>::const_iterator it = l.begin();
    while(it!=l.end()){
        sum += *it;
        ++it;
        ++n;
    } 
    return n == 0 ? -1 : sum/n;
} 

bool is_in(const list<int>& l, int n){
    list<int>::const_iterator it = l.begin();
    while(it != l.end()){
        if(*it == n)return true;
        ++it;
    } 
    return false;
} 

int calc_min(const list<int>& l){
    list<int>::const_iterator it = l.begin();
    int min = *it;
    while(it != l.end()){
        if(*it < min)min = *it;
        ++it;
    } 
    return min;
} 


int calc_max(const list<int>& l){
    list<int>::const_iterator it = l.begin();
    int max = *it;
    while(it != l.end()){
        if(*it > max)max = *it;
        ++it;
    } 
    return max;

} 

void borrar(list<int>& l, int n){

    list<int>::iterator it = l.begin();
    while(it != l.end()){
        if(*it == n){
            it = l.erase(it);
        } else ++it;
    } 

} 

void recalcular(list<int>& l, S& s, int code, int n){

    if(code == -1){

        if(not is_in(l, n)){
            l.insert(l.end(), n);
            if(n<s.min)s.min = n;
            if(n>s.max)s.max = n;
            s.avg = calc_avg(l);
        } 

    } else if(code == -2){

        borrar(l, n);
        if(n<s.min)s.min = calc_min(l);
        if(n>s.max)s.max = calc_max(l);
        s.avg = calc_avg(l);

    } 
} 


int main(){

    pair<int,int> p;
    list<int> l;
    S s;
    while(cin >> p.first >> p.second and p.first != 0){

        recalcular(l, s, p.first, p.second);
        cout << s.min << ' ' << s.max << ' ' << s.avg << endl; 
    } 
} 
