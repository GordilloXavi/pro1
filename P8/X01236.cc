#include<iostream>
#include <vector>
using namespace std;

typedef vector< vector<char> > Matrix;

bool es_subparaula_diag(const string& s, const Matrix& a){

    int wSize = s.size();
    int sz = a.size();

    for(int i = 0; i<= sz - wSize; ++i){//recorre un lado

        for(int j = 0; j<= sz-i - wSize; ++j){//recorre la diagonal

            bool f = true;//found word?

            for(int k = 0; k< sz and f; ++k){

                f = a[i+j+k][0+j+k] == s[k];

            } 
            if(f)return true;

            f = true;
            for(int k = 0; k< sz and f; ++k){

                f = a[0+j+k][i+j+k] == s[k];

            } 
            if(f)return true;



        } 


    }

    return false;


}
 


int main() {

        int m;

        cin >> m;

        for(int i = 0; i<m; ++i){

            string word;
            int n;
            cin >> word >> n;
            Matrix sopa(n, vector<char>(n));

            for(int j = 0; j<n; ++j)for(int k = 0; k<n; ++k)cin >> sopa[j][k];

            cout << boolalpha << es_subparaula_diag(word, sopa) << endl;

        } 

} 
