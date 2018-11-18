#include <iostream>
using namespace std;


int func(int n){

    int s = 0; 

    for(int i = 1; i<n; ++i){

        s+= i*(i+1);

    } 

    return s;

} 


int main()
{
  int n;
  while (cin>>n) {
    cout<<func(n)<<endl;
  }
}
