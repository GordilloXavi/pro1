#include <iostream>
using namespace std;


int main() {

	char c;

	while(cin >> c and c != '#'){
		
		//Careful with non-letter chars

		if((c >= 'A' and c <= 'Z') or (c >= 'a' and c <= 'z')){
		
		if(c >= 'a' and c <= 'z'){
			
			c-= int('a'-'A');
	
		
		}
		
		int diff = int(c - 'A');

		cout << char('Z'-diff);

	}
		
		
		
	}cout << "#" << endl;


}
