#include <iostream>
using namespace std;


int main(){

	string s1, charset;

	cin >> s1 >> charset;


	for(int i = 0; i<s1.size(); ++i){

		for(int j = 0; j<charset.size(); ++j){

			if(s1[i] == charset[j]){
				
				s1[i] == 'X';

			}

		}


	}

	cout << s1 << endl;

	for(int i = 0; i<s1.size();++i){

		if(s1[i] == '#')s1.erase(i,i);

	}

	cout << s1 << endl;	
	


}
