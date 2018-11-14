#include <iostream>
#include <vector>
using namespace std;


int main(){

    int n;

    while(cin >> n){

        vector<int> nums(n);

        for(int i = 0; i<n; ++i)cin >> nums[i];

        int moda = 0, rep = 0;

        for(int i = 0; i<n; ++i){

        int r = 0;

        for(int j = 0; j<n; ++j)r += (nums[i] == nums[j]);

            if(r > rep or (r == rep and nums[i]> moda)){
                  moda = nums[i];
                  rep = r;

            } 

        } 

        cout << moda << endl;

    } 


} 
