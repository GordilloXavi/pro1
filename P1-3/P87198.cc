#include <iostream>
using namespace std;


int main() {

	int n;

	while(cin >> n){

		int r = n*2 +(n-2); 


		for(int j = 0; j<n; ++j){
			for(int i = n-j-1; i> 0; --i){
				cout << " ";

			}
			for(int i = 0; i<n+j*2; ++i){
				cout << "X";
			}
		cout << endl;
		}


		for(int i = 0; i<n-2; ++i){
			for(int j = 0; j<r; ++j)cout << "X";
				cout << endl;
		}

		for(int i = 0; i<n; ++i){
			for(int j = i; j>0; j--){
				cout << " ";
			}
			for(int j = r-i; j>0+i; --j){
				cout << "X";
			}
			cout << endl;

		}
		cout << endl;
		

	}


}