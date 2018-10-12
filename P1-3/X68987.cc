#include <iostream>
#include <vector>
int main(){

	int tot = 0;
	double n;
	double avg;
	int res = 0;
	std::vector<double> m;

	while(std::cin >> n){

		avg+=n;
		tot++;
		std::cout << "n: " << n << std::endl;

	}avg /= tot;


	for(int y : m)if(y < avg)res++;

		std::cout << res << "\n";

}