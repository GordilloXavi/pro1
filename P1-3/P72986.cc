#include <iostream>
#include <cmath>
using namespace std;


int main() {

	double x, n, a = 0;
	double tot = 0;
	cin >> x;

	while(cin >> n){

		tot = n + a*x;

		a = tot;

	}
	cout.setf(ios::fixed);
	cout.precision(4);
	cout << a << endl;

}