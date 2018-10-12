#include <iostream>
using namespace std;

int main(){

	char c;

	cin >> c;

	if(int(c) >= 97){

		cout << "lowercase\n";

		if(c == 'a' or c == 'e' or c == 'i' or c == 'u' or c == 'o')cout << "vowel\n";
		else cout << "consonant\n";

	}else{
		cout << "uppercase\n";
		if(c == 'A' or c == 'E' or c == 'I' or c == 'O' or c == 'U')cout << "vowel\n";
		else cout << "consonant\n";



	}

}