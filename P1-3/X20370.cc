#include <iostream>

int main(){

	int u, l, sp;

	u = l = sp =0;

	std::string s;

	getline(std::cin, s);

	for(int i = 0; i<s.size(); ++i){

		if(s[i] >=97 and s[i] <=122)l++;
		else if(s[i] >= 65 and s[i] <=90)u++;
		else if(s[i] != ' ') sp++;

	}
	printf("Uppercase %d\nLowercase %d\nOther %d\n", u,l,sp);


}