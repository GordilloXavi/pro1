#include <iostream>
#include <algorithm>
using namespace std;

int main(){

	string s;
	getline(cin, s);
	while(s != "#"){
		reverse(s.begin(), s.end());

		cout << s << endl;
		getline(cin, s);

	}


}