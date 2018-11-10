#include <string>
#include <iostream>


int main(){

	std::string s("Hello world ");

	std::string s2(s,4,6);//Substring of s from s[4] to s[6]

	std::string s3(5,'X');

	std::string s4 = s+s2 + " ";

	std::cout << s << s2 << s4 << s3 << std::endl;

	if(s.find("world"))std::cout << "We found the Substring " << s.substr(6,10) << std::endl;

	std::string sInt = "420";

	int n = stoi(sInt);

	std::cout << n << std::endl;

	



}