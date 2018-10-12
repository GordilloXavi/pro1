#include <iostream>

int main() {

	int x, y, n, tot;

	while(std::cin >> x >> y >> n){

		tot = 0;

		while(n>1 and n<=1000000){

			n = n%2==0 ? n/2+x : n*3 +y;

			tot++;

			std::cout << n << std::endl;

		}

		std::cout << tot << std::endl;


	}



}