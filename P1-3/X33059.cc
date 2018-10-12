#include <iostream>
#include <iomanip>
int main(){
	
	double d; 
	char c;

	while(std::cin >> d and d != -1){

		std::cin >> c;

		double f = c == 'Y' ? 1.8 : 2;
		f *=d;

		std::cout << std::fixed << std::setprecision(2);

		std::cout << f << "\n";

	}


}