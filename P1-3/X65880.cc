#include <iostream>
using namespace std;


int main() {

	char a;
	cin >> a;

	if(a >= '0' and a <= '9')cout << "Number\n";
	else{

		if(a >= 'A' and a <= 'Z')cout << "Uppercase";
		else cout << "Lowercase";

		cout << " letter\n";

	}



}