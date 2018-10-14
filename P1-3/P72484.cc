#include <iostream>
using namespace std;


int main() {

	int n;

	cin >> n;

	for(int i = 0; i<n-1; ++i){

		for(int j = i; j<n-1; ++j)cout << ' ';
		for(int j = 0; j<2*i+1; ++j)cout << '*';
		cout << endl;

	}
	for(int i = 0; i<n*2-1;++i)cout << '*';
	cout << endl;	

	for(int i = 0; i<n-1; ++i){

		for(int j = 0; j<=i; ++j)cout << ' ';
		for(int j = 2*i; j<2*n-3;++j)cout << '*';
		cout << endl;

	}


}
