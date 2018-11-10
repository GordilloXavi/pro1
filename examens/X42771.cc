#include <iostream>
using namespace std;


int main() {

	int n;

	while(cin >> n){

		int x;
		int prev = 0;

		int pairs = 0;

		for(int i = 0; i<n; ++i){

			cin >>  x;

			if((x > 0 and prev < 0 ) or (x < 0 and prev > 0))pairs++;

			prev = x;

		}

		cout << pairs << endl;

	}

}
