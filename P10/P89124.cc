#include <vector>
#include <iostream>
using namespace std;

bool isPrime(int n){

    if(n < 2)return false;

    vector<bool> v(n+1,1);//1 means prime

    for(int i = 2; i<n+1; ++i){
        if(v[i]){
            int j = 2*i;
           while(j<=n){
                if(j == n)return 0;
                v[j] = 0;
                j+=i;
           }  }

    } 
    return true;

} 

bool isPrime2(int n){

    if(n<2)return 0;

    for(int i = 2; i*i<=n; ++i){
        if(n%i == 0)return 0;
    } 
    return 1;

} 

int main() {

    int n;
    while(cin >> n){
        bool k = isPrime2(n);
        if(not k)cout << n << " is not prime" << endl;
        else cout << n << " is prime" << endl;
    } 

}
