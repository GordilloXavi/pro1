#include <iostream>
#include <algorithm>
using namespace std;


int dig(int n, int b){

	int d = 1;

	while(n>=b){
		n/=b;
		++d;
	}
	return d;

}

int main(){

	int b,n;

	while(cin >> b and cin >> n)cout << dig(n,b) << endl;

}

