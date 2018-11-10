#include <vector>
#include <iostream>
#include<iterator>

//Iterators are pointers that point to memory locations of arrays and other 
//data structures (like vectors)

int main(){

	std::vector<int> nums = {1,2,3,4};

	std::vector<int>::iterator itr;

	for(itr = nums.begin(); itr < nums.end(); ++itr){

		std::cout << *itr << std::endl;

	}

	std::vector<int>::iterator itr2 = nums.begin();
	advance(itr2, 2);
	std::cout << *itr2 << std::endl;

	auto itr3 = next(itr2, 1);

	std::cout << *itr3 << std::endl;

	int* f;

	std::cout <<"->  " <<  f << " /// " << &f<< std::endl;

}