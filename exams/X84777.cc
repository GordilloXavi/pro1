#include <iostream>
#include <vector>
using namespace std;

vector<int> read_vector(int n) {
   vector<int> v(n);

    for(int i = 0; i<n; ++i)cin >> v[i];

   return v;
}

int count_elements(const vector<int>& v, int x) {

    int tot = 0, s = v.size();

    for(int i = 0; i<s;++i)tot += v[i] == x; //tot will increment only if the expression is true


    return tot;

}


int main() {
   int n;
   while (cin >> n) {
      vector<int> v = read_vector(n);
      int nqueries;
      cin >> nqueries;
      for (int i =0; i < nqueries; ++i) {
         int x;
         cin >> x;
         cout << count_elements(v,x) << endl;
      }
   }
}
