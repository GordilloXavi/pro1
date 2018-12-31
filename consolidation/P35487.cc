#include <iostream>
#include <vector>
using namespace std;

struct Info {
         string nom, hora;
};

string busca(string nom, const vector<Info>& v){

    int l = 0, r = v.size(), m = (r+l)/2;
    int s = r;
    if(s == 0)return "ABANDONA";
    while(l<r){
       
       if(v[m].nom == nom) {
           if(m != 0 and v[m-1].nom == nom)return "???";
           if(m!= s-1 and v[m+1].nom == nom)return "???";
           return v[m].hora;
       } else if(v[m].nom < nom){
           l = m+1;
       }else r = m-1; 


        m = (l+r)/2;
    } 
       if(v[m].nom == nom) {
           if(m != 0 and v[m-1].nom == nom)return "???";
           if(m!= s-1 and v[m+1].nom == nom)return "???";
           return v[m].hora;
       }
    return "ABANDONA";

} 

int main(){
    int n;
    cin >> n;
    vector<Info> L1(n);

    for(int i = 0; i<n; ++i){
        cin >> L1[i].nom >> L1[i].hora;
    } 
    string dni, nom;
    while(cin >> dni >> nom){
        string res = busca(nom, L1);
        cout << dni << ' ' << res << endl;
    } 

} 
