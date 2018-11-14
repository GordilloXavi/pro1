#include <iostream>
#include <vector>
using namespace std;

int common_elements(const vector<int>& X, const vector<int>& Y){

    int com = 0;

    for(int i = 0; i< X.size(); ++i){

        for(int j = 0; j< Y.size(); ++j){

            com += X[i] == Y[j];

        } 

    } 

    return com;

} 

