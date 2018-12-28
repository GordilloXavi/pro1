#include <vector>
#include <iostream>
using namespace std;

int soom(const vector<int>& v){

    int s = v.size();
    int x = 0;
    for(int i = 0; i<s; ++i)x+=v[i];
    return x;

} 

bool magic_square(const vector< vector<int> >& v){

    int sz = v[0].size();
    if(sz == 0)return 0;
    int sum = soom(v[0]);


    int sd1 = 0;
    int sd2 = 0;

    for(int i = 0; i<sz; ++i){

        int s1 = 0;
        int s2 = 0;

        for(int j = 0; j<sz; ++j){
            s1+=v[i][j];
            s2+=v[j][i];
            if(v[i][j] > sz*sz)return 0;
        } 

        if(s2 != sum or s1 != sum)return 0;

        sd1+=v[i][i];
        sd2+=v[sz-1-i][i];

    } 

    return sd1 == sum and sd2 == sum;

} 
/*
int main() {

    int n;
    cin >> n;

    vector< vector<int> > v(n, vector<int>(n));

    for(int i = 0; i<n; ++i)for(int j = 0; j<n; ++j)cin >> v[i][j];

    bool f = magic_square(v);

   cout << f << endl; 

} */
