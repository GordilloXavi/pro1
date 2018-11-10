#include <iostream>
#include <memory>
#include <vector>

//I dont know what these are useful for...
// https://www.youtube.com/watch?v=q_LUYLV3l44&index=18&list=PLGLfVvz_LVvQ9S8YSV0iDsuEU8v11yP9M

int main(){

	int amtTostore;

	std::cout << "How many numbers do you want to srote? \n";

	std::cin >> amtTostore;

	std::unique_ptr<int[]> pnums(new int[amtTostore]);

	if(pnums != NULL){

		int i = 0;

		while(i <amtTostore){

			std::cout << "enter a number: \n";

			std::cin >> pnums[i];

			++i;
		}

	}

	std::cout << "You entered these numbers: \n";

	for(int i = 0; i< amtTostore; ++i)std::cout << pnums[i] << std::endl;


}