#include <iostream>
using namespace std;


int main() {

	int n,m, tot;
	char s;
	tot = 0;
	cin >> n >> m;


	for(int i = 0; i<n*m; ++i){

		cin >> s;

		tot+=s-int('0');

	}

	cout << tot << endl;

}