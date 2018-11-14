#include <iostream>
using namespace std;



int main() {
	
	int n;

	bool b = 0;

	while(cin >> n){

		if(b)cout << endl;
		b = 1;

		for(int i = 0; i<n; ++i){


			for(int j = 0; j<i    ; ++j)cout << ' ';

			for(int j = 2*i; j<2*n-1; ++j){
			
				cout << 'X';

			
			}cout << endl;

		}

		for(int i = 0; i<n-1; ++i){

			for(int j = 0; j< n-2-i; ++j )cout << ' ';
			for(int j = 0; j< 3+2*i ; ++j)cout << 'X';

			cout << endl;



		}


	}



}
