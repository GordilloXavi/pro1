#include <iostream>
using namespace std;

int main(){


	string s;

	cin >> s;

	string w = "";
	string n = "";



	for(int i = 0; i< s.size(); ++i){

		if(s[i] >= '0' and s[i] <= '9')n += s[i];
		else w += s[i];

	}

	cout << w << endl << n << endl;

}