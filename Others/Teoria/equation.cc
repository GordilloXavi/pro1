#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>

std::vector<char> trim(std::string& s);

void solve(std::string s){

	std::vector<char> oper = trim(s);

	for(char c : oper)std::cout << c << std::endl;

	int res = int(oper[4]) - int(oper[2]);

	printf("X = %d\n", res);




}

std::vector<char> trim(std::string& s){

	std::vector<char> v1;

	for(int i = 0; i< s.size(); ++i){

		if(s[i] != ' ')v1.push_back(s[i]);

	}

	return v1;


}

int main(){

	std::string s;

	while(getline(std::cin, s)){
	
	solve(s);
	
}
}