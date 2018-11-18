#include <iostream>
using namespace std;

int func(int n){

    if(n == 1)return 0;
    if(n == 2)return 2;

    return (n-1)*n + func(n-1);


} 

int main()
{
  int n;
  while (cin>>n) {
    cout<<func(n)<<endl;
  }
}
