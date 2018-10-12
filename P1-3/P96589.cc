#include <iostream>
using namespace std;


int main() {

	char c;

	cin >> c;

	if(c<='z' and c >='a' or c <= 'Z' and c >= 'A')cout << "lletra\n";
	else if(c >= '0' and c <= '9')cout << "digit\n";
	else cout << "res\n";



}