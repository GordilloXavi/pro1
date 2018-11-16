#include <vector>
using namespace std;


vector<int> concatenation(const vector<int>& v1, const vector<int>& v2){

    vector<int> V(v1.size()+v2.size());

    for(int i = 0; i<v1.size(); ++i)V[i] = v1[i];

    
    for(int i = 0; i<v2.size(); ++i)V[v1.size()+i] = v2[i];

    

    return V;

} 
