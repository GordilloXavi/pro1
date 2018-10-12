#include <iostream>
using namespace std;

int toBase(int n, int b){

	int r = 0;

	while(n>=b){
		r += n%b;
		n/=b;
	}r+=n;

	return r;

}

int main() {

	int b,n;

	cin >> b;

	while(cin >> n)	cout << n << ": "<< toBase(n,b) << endl;

	

}