#include <iostream>
using namespace std;


int main() {

	int n;
	char c;

	cin >> n >> c;

	for(int i = 0; i<n; ++i){


		for(int j = 0; j< n; ++j){

			if(i == n/2)cout << c;
			else{
			if(i == j or j == n/2 or j == n-1-i){
				cout << c;
			}else cout << '.';
		}
		}

		cout << endl;

	}


}