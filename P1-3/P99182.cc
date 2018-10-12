#include <iostream>

int main(){
	
	int a,b;

	std::cin >> a >> b;

	double d = a + double(b - a)/2;

	std::cout << d << std::endl;

}