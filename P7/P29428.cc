#include <iostream>
#include <vector>
using namespace std;

bool contains(const string& s1, const string& s2){

        int sz2 = s2.size();

        if(s1.size() < s2.size())return false;

        bool eq = 0;

        for(int i = 0; i<= s1.size()-sz2; ++i){

            bool e2 = 1;

            for(int j = 0; j<sz2; ++j){
                if(s1[i+j] != s2[j]) e2 = 0;


            }

            if(e2)return 1;


        }

        return 0;

}

int main(){

    int n;

    cin >> n;

    vector<string> V(n);

    for(int i =0; i<n; ++i)cin >> V[i];

    for(int i =0; i<n; ++i){

        cout << V[i] << ":";

        for(int j =0; j<n; ++j){

            if(contains(V[i], V[j]))cout <<" " << V[j];



        }

      cout << endl;


    }


}
