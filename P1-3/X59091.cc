#include <iostream>
using namespace std;

int main() {

	int n,m;
	bool t = false;
	while(cin >> n >> m){

	if(t)cout << endl;
	t = true;
	int i = 0;
	int r = 1;

	while(i<n*m){

		cout << 9-i%10;
		if(r == m){
			cout << endl;
			r = 0;
		}
		r++;
		i++;
		
	}

}

}