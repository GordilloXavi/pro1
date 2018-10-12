#include <iostream>
using namespace std;

int main() {

	int m,n,o;
    bool b = false;
	while(cin >> m >> n){
    if(b)cout << endl;
    b = true;
		o = (n+m)%5;

		for(int i = 0; i<m; ++i){
			for(int j = 0; j<n; ++j)cout << o;
			cout << endl;
		}//cout << endl;


	}


}