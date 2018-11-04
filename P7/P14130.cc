#include <iostream>
#include <vector>
using namespace std;


int main(){

    int n, tot = 0;
    
    cin >> n;

    vector<int> nums(n);

    for(int i = 0; i<n; ++i){

        cin >> nums[i];

    }
    
    for(int i = 0; i< n-1; ++i){

        if(nums[i] == nums[n-1])tot++;

    } 

    cout << tot << endl;


} 
