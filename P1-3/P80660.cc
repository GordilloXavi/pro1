#include <iostream>
using namespace std;

int main() {

	int n,s;
	
	while(cin >> n){
	s = 0;
	while(n!=1){

		n = n%2 ? n*3+1 : n/2;

		s++;

	}

	cout << s << endl;
}
}