#include <iostream>
using namespace std;

int main() {

	double rate, n;
	string s;
	double d = 0;
	double e = 0;

	cin >> rate;

	while(cin >> n >> s){

		if(s == "USD"){
			d+=n;
			e+= n/rate;

		}
		else{
			e+=n;
			d += n*rate;
		}

	}
	cout.setf(ios::fixed);
	cout.precision(4);
	cout << e << " " << d << endl;




}