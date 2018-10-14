#include <iostream>
using namespace std;

int main() {
	
	int n;

	int x = 0;

	bool sl = 0;

	while(cin >> n){

		if(sl)cout << endl;

		for(int i = 0; i<n; ++i){
			for(int j = 0; j<n; ++j){
				cout << x%10;
				++x;

			}cout << endl;

		}

		sl = true;


	}


}
