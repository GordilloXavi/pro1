#include <iostream>
using namespace std;


int main() {

	int m, n;

	while(cin >> n >> m){
	double h = 0;
	for(int i = min(m,n)+1; i<=max(n,m); ++i)h += 1.0/i;
	cout.setf(ios::fixed);
	cout.precision(10);
	cout << h << endl;	

}

}