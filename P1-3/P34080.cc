#include <iostream>
using namespace std;


int main() {
	
	int n;

	bool sl = false;


	while(cin >> n){

		if(sl)cout << endl;

		int x = 0;

		for(int i = 0; i<n;++i){

			for(int j = 0; j<n; ++j){
				cout << x%10;
				++x;

			}cout << endl;
		}




		sl = true;

	}


}
