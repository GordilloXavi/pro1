#include <iostream>
#include <vector>
using namespace std;

int main() {
	
	int n;
	int index = 0;

	double h, t;
	double m = 0;

	cin >> n;

	vector<double> planets(n);

	for(int i = 0; i<n; ++i){

		cin >> h >> t;

		double g = (2*h)/(t*t);
		if(g > m){m = g;
		index = i;}
		planets[i] = g;

	}

	cout << "Planet number " << index+1 << " has the most gravity.\n";

}