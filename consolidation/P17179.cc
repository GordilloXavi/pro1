#include<iostream>
#include <vector>
using namespace std;


int main() {

    int n;

    cin >> n;


   for(int i = 0; i<n; ++i){

       int x; 
    
       double d = 0;

       cin >> x;

       double max = 0;
       double min;

       vector<double> nums(x);

       for(int j = 0; j<x; ++j){

           

           cin >> nums[j]; 

            d += nums[j];

            if(j == 0)min = nums[j];
            else min = min<nums[j] ? min : nums[j];
            
            if(j == 0)max = nums[0];
            else max = max < nums[j] ? nums[j] : max;

       } 

        cout.setf(ios::fixed);
        cout.precision(4);

       cout << min << ' ' << max << ' ' << d/nums.size() << endl;


   }  

} 
