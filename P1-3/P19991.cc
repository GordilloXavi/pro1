#include <iostream>
using namespace std;

int main() {

	int n,c;
	string s;
	c = 0;
	cin >> n;
	for(int i = 0; i<n; ++i){

		cin >> s;
		c += int(s[i]-'0') + int(s[n-i-1]-'0');
		if(i == n-i-1)c-= int(s[i]-'0');

	}

	cout << c << endl;

}