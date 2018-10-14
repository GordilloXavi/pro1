#include <iostream>
using namespace std;

void print_line(char c, string s, bool b) {
         cout << s << "('" << c << "') = ";
         if (b) cout << "true" << endl;
         else cout << "false" << endl;
     }

int main() {

	char c;

	cin >> c;

	bool letter, vowel, consonant, uppercase, lowercase, digit;

	letter = vowel = consonant = uppercase = lowercase = digit = 0;

	if(c>= '0' and c <= '9')digit = 1;
	else{
		letter = 1;
		
		if(c >= 'A' and c<='Z')uppercase = 1;
		else lowercase = 1;

		if(c =='a' or c == 'A' or c == 'e' or c == 'E' or c == 'i' or c == 'I' or c == 'o' or c == 'O' or c == 'u' or c == 'U' )vowel = 1;
		else consonant = 1;

	}	
	

	print_line(c,"letter",letter);	
	print_line(c,"vowel",vowel);	
	print_line(c,"consonant",consonant);	
	print_line(c,"uppeercase",uppercase);	
	print_line(c,"lowercase",lowercase);	
	print_line(c,"digit",digit);	

}
