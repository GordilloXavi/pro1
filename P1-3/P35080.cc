#include <iostream>
using namespace std;


int main() {

	int n;

	cin >> n;

	for(int i = 0; i<n; ++i){
		if(i != 0)cout << endl;

		int x = 0;

		for(int j = 0; j<n; ++j){
			for(int k = 0; k<n; ++k){

				cout << x%10;
				x++;
			}cout << endl;
	

		}


	}	

}
