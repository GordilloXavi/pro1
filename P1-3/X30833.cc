#include <iostream>
using namespace std;


int main() {

	int n;
	char c;

	cin >> n >> c;

	for(int i = n/2+1; i>0 ; --i){

		for(int j = 0; j< n-2*i+1 ; ++j){
			cout << ' ';
		}
		for(int j = 0; j<4*(i-1)+1; ++j){
			if(j%2 == 1)cout << '.';
			else cout << c;
		}

		cout << endl;

	}

}