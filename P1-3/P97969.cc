#include <iostream>
using namespace std;


int main() {

	string s;

	getline(cin, s);

	int tot = 0;

	for(int i = 0; i<s.size(); ++i)tot += (s[i] == 'a');

		cout << tot << endl;

}