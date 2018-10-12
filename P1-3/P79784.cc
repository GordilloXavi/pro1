#include <iostream>
using namespace std;


int main() {

	int x = 0;
	int y = 0;
	string s;

	cin >> s;

	for(int i = 0; i<s.size(); ++i){

		if(s[i] == 'n')y--;
		else if(s[i] == 's')y++;
		else if(s[i] == 'e')x++;
		else if(s[i] == 'w')x--;

	}
	printf("(%d, %d)\n", x,y);

}