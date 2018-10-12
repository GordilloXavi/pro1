#include <iostream>

int main(){
	
	std::string s;
	int tot = 0;
	char c = 'a';
	int n;

	while(std::cin >> n){
		bool f = false;

		for(int i = 0; i< n; ++i){

			std::cin >> s;

			if(s[0] == c and !f){
				tot++;
				f = true;
				
			}

		}if(!f)std::cout << "Could not find a match for " << c << "\n";
		c++;

	}
	std::cout << tot << "\n";


}