#include <iostream>
using namespace std;

int main() {

	int n;

	while(cin >> n){

		int p = n/7, q;

		while((n- p*7)%4 != 0)p--;

		q = (n-p*7)/4;

		cout << p << " " << q << endl;

	}

	
}

