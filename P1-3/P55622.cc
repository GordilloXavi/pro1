#include <iostream>
#include <iomanip>

using namespace std;

int main(){

	
	int a;

	cin >> a;

	cout << "The number of digits of " << a <<  " is ";

	int d = 1;

	while(a >= 10){

		d++;
		a /= 10;

	}

	cout << d << ".\n";

}