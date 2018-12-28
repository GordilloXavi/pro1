#include <iostream>
#include <vector>
using namespace std;

vector<double> difference(const vector<double>& v1, const vector<double>& v2){

    int s1 = v1.size(), s2 = v2.size();

    vector<double> res;

    int i = 0, j = 0;

    while(i<s1 and j<s2){

        if(i>0 and v1[i]==v1[i-1])i++;
        else if(j>0 and v2[j] == v2[j-1])j++;
        else if(v1[i]<v2[j]){
            res.push_back(v1[i]);
            ++i;            
        } 
        else if(v1[i] == v2[j]){
            i++;
            j++;
        } 
        else {
            j++;
            
        } 

        

    } 
    while(i<s1){
        if( i == 0 and j>0 and v1[i]>v2[j-1] or  (((j>0 and v1[i]> v2[j-1]) or s2 == 0) and v1[i] != v1[i-1]))res.push_back(v1[i]);
        ++i;
    } 
    return res;

} 
 /*int main() {

     int n1, n2;
     cin >> n1 >> n2;

    vector<double> v1(n1);
    vector<double> v2(n2);

    for(int i = 0; i<v1.size(); ++i)cin >> v1[i];
    for(int i = 0; i<v2.size(); ++i)cin >> v2[i];

    vector<double> r = difference(v1,v2);

    for(int i = 0; i<r.size(); ++i)cout << r[i] << ' ';
    cout << endl;


} */
