#include <iostream>
#include <cmath>
using namespace std;


int main(){

	const double PI = 3.1415926535897;

	cout.setf(ios::fixed);
	cout.precision(6);

	double n;

	while(cin >> n){

		cout << sin(PI*n/180.0) << " " << cos(PI*n/180.0) << endl; 

	}


}
