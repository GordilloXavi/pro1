#include <iostream>
#include <vector>
using namespace std;

int common_elements(const vector<int>& X, const vector<int>& Y){

    int common = 0;

    for(int i = 0; i<X.size(); ++i){

        int low = 0;

        for(int j = low; j< Y.size() and X[i] <= Y[j]; ++j){

            if(X[i] == Y[j]){

                common++;

                low = j+1;
            }

            low = j;

            

        }




    }

    return common;


}
    

int main(){

    //vector<int> v1 = {3,5,7,8};
    //vector<int> v2 = {2,3,7, 9, 10};


    vector<int> v1 (4); 
    vector<int> v2 (5);

    for(int i =0; i<4; ++i)cin >> v1[i];

    for(int i =0; i<5; ++i)cin >> v2[i];


    cout << common_elements(v1,v2) << endl;



}
