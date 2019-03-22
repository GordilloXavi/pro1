#include <iostream>
#include <vector>
using namespace std;

vector<double> intersection(const vector<double>& v1, const vector<double>& v2){

    int i = 0, j = 0;
    int s1 = v1.size(), s2 = v2.size();

    vector<double> v;

    while(i<s1 and j<s2){

        if(v1[i] < v2[j]){
            i++;
        } else if(v1[i] > v2[j]){
            j++;
        } else {
            v.push_back(v1[i]);
            i++;
            j++;
        } 
        while(i < s1 and v1[i] == v1[i-1])++i;
        while(j < s2 and v2[j] == v2[j-1])j++;
    } 

    return v;

} 
/*
int main(){

    int s1, s2;
    cin >> s1 >> s2;
    vector<double> v1(s1);
    vector<double> v2(s2);
    for(int i = 0; i<s1; ++i)cin >> v1[i];
    for(int i = 0; i<s2; ++i)cin >> v2[i];

    vector<double> v = intersection(v1,v2);
    for(int i = 0; i<v.size(); ++i)cout << v[i] << ' ';
    cout << endl;

} 
*/
