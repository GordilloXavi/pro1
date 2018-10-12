#include <iostream>
using namespace std;


int main(){

	std::string s,s2;

	std::cin >> s >> s2;

	int l = s.size();
	int l2 = s2.size();

	for(int i = 0; i<l; ++i){

		for(int j = 0; j<l2;++j){

			if(s[i] == s2[j])s[i] = '.';

		}

	}

	string r = "";
	for(char c : s)if(c != '.')r+= c;

	cout << r << endl;

}