#include <iostream>

int main(){

	std::string s;

	while(std::cin>>s){

		for(int i = s.size()-1; i>=0; --i)std::cout << s[i];
		std::cout << std::endl;



	}
}
