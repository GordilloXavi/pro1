#include <iostream>
using namespace std;


int main() {
	
	int a, b, c;
	int tot = 0;

	while(cin >> a >> b >> c)if(a%10 == a/100 and b%10 == b/100 and c%10 == c/100 and a%10 < b%10 and b%10 < c%10)tot++;

	cout << "3-Increasing: " << tot << endl;
}