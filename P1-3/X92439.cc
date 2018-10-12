#include <iostream>
#include <string>
int main(){

	std::string a;
	std::string b;
	std::string c;

	std::cin >> a >> b >>c;

	int h, m, s;

	s = std::stoi(a[6] + a[7]);
	m = std::stoi(a[3]+a[4]);
	h = std::stoi(a[0]+a[1]);



	printf("%dh%dm%ds\n",h,m,s );



}