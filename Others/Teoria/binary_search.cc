#include <iostream>
#include <vector>
#include <algorithm>

//Pre: the vector is sorted increasingly
int binary_search(const std::vector<int>& v, int* min, int* max, int value){

	if(&min >= &max)return -1;

	int* index = int*((min+max)/2);

	if(value > v[index])return binary_search(v,index,max,value);
	else return binary_search(v,min,index,value);

}

//template <typename T>

void display(const std::vector<int>& vect){

	std::cout << "{";

	for(int i = 0; i< vect.size()-1; ++i){

		std::cout << vect[i] << ", ";

	}

	std::cout << vect[vect.size()] << "}\n";


}


int main() {

	const std::vector<int> numbers = {3,34,34,143,5,43,56,23,2,62,62,2546,2,3,54,435,234,622,3421,1,23,15,134,5134,13,5};

	display(numbers);

	std::sort(numbers.begin(), numbers.end());

	std::cout << "Sorted numbers: \n";

	display(numbers);

	std::cout << "What value do you want to find?\n";

	int val;

	std::cin >> val;

	int i = binary_search(numbers, numbers.begin(), numbers.end(), val);

	if(i == -1)std::cout << "Value not found.\n";

	else std::cout << "The value " << val << " was found at index " << i << "\n";

	return 0;


}