#include <iostream>

int main(){

	double km = 0;

	int n;

	for(int i = 0; i< 365; ++i){

		std::cin >> n;

		km += n;


	}
	std::cout << ((km*1.6 < 622) ? "No\n" : "Yes\n");

}