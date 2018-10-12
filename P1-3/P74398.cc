#include <iostream>

using namespace std;

int cifras(int n, int i){

	int c = 1;

	while(n >= i){

		n /= i;
		c++;

	}

	return c;

}

int main(){

	
	int a;

	cin >> a;

	for(int i = 2; i<=16; ++i){

		cout << "Base " << i << ": " << cifras(a, i) << " cifras.\n";

	}

}