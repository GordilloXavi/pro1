#include <iostream>
using namespace std;


int main() {

	int n;

	bool sn = true;

	while(cin >> n){

		if(!sn)cout << endl;

		for(int i = 0; i<n; ++i){
			for(int j = 0; j<n; ++j)cout << n;

			cout << endl;

		}




		sn = false;
	}

}
