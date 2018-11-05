#include <vector>
using namespace std;

double scalar_product(const vector<double>& u, const vector<double>& v){

    int n = u.size();

    double prod = 0;

    for(int i = 0; i<n; ++i)prod+= u[i]*v[i];
 
    return prod;

} 
