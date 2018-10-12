#include <iostream>

using namespace std;

int main(){

	char c;

	cin >> c;

	if(c > 'Z')cout << char(int(c) - 32) << endl;
	else cout << char(int(c) + 32) << endl;

}