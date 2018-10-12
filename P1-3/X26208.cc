#include <iostream>
using namespace std;


int main() {

	int h, n, m;

	cin >> h >> n >> m;

	for(int i = 0; i<h; ++i){

		for(int j = 0; j<n*m; ++j){

			cout << 9-j%10;
			if((j+1)%m==0)cout << endl;

		}

		if(i!=h-1)cout << endl;

	}

}