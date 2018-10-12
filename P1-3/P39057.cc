#include <iostream>
#include <cmath>
using namespace std;


int main() {

	cout.setf(ios::fixed);
	cout.precision(6);

	int n;
	string s;
	double r,w;
	cin >> n;
	for(int i = 0; i<n; ++i){

		cin >> s;
		cin >> r;

		if(s == "rectangle"){

			cin >> w;

			cout << r*w << endl;

		}else{

			cout << r*r*M_PI << endl;

		}

	}


}