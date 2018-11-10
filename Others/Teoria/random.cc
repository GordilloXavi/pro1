#include <ctime>
#include <iostream>

int random1(int min, int max){

	srand(time(NULL));
	int number = min + std::rand()%(max-min+1);

	return number;



}


int main(){
	
	std::cout << random1(10,11) << std::endl;

}