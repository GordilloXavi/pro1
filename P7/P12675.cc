#include <iostream>
#include <vector>
using namespace std;

int common_elements(const vector<int>& X, const vector<int>& Y){

    int c = 0;

    int beg = 0;

    for(int i = 0; i< X.size(); ++i){

        bool found = false;

        for(int j = beg; j<Y.size() and not found; ++j){

            if(X[i] == Y[j]){

                c++;

                beg = j+1;
                found = true;

            } 
            else if(X[i] < Y[j]){

                beg = j;

                found = true;

            } 


        } 

    } 

    return c;

}
