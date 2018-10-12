#include <iostream>

using namespace std;

int main(){

	string s;

	getline(cin, s);

	string h = "";

	for(int i = 0; i<s.size(); ++i){

		char c = s[i];

		if(c >= 'a' and c <= 'z')h+=char(int(c) - 32);
		else if(c >= 'A' and c <= 'Z') h+= char(int(c) + 32);
		else h+=s[i];
	}

	cout << h<< endl;

}