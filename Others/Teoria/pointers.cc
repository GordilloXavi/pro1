#include <vector>
#include <iostream>
#include <numeric>

using namespace std;

void ExampleFunction();
//You can declare a global function and then inicialize if under the main function

int main(){

	// ##############################
	// ##         POINTERS!		   ##	
	// ##############################

	
	int age = 420;

	cout << "Adress of age: " << &age << "\n"; 
	//Prints the adress where the variable is stored

	int* adress = &age;
	//Stores the adress in a variable

	cout << "The same adress: " << adress << "\n";

	int intArray[] = {1,2,3,4};

	int* pointArray = intArray;
	//With arrays you do not need to write &intArray
	//This will give you the adress of the first element of the array
	// pointArray++; will give you the adress of the second element

	int* point1 = &intArray[0];
	int* point2 = &intArray[1];
	//You can access the adress of each element

	
	cout << "Adress of the first element of the array: " << pointArray << "\n";
	cout << "First element of the array: " << *pointArray << "\n";

	pointArray++;

	cout << "Adress of the second element of the array: " << pointArray << "\n";
	cout << "Second element of the array: " << *pointArray << "\n";
	//The adress is a hexadecimal number. If you add 4 to that number
	//(4 bytes = 1 int space) you will get the next adress location in the array.





return 0;

}

void ExampleFunction(){

	
		
	vector<int> myVect(10);

	iota(begin(myVect), end(myVect), 0);
	//Inicializes the vector as {0,1,2,3,4,5,6,7,8,9}
	//Requires #include <numeric> 

	for(auto i: myVect)cout << i << "\n";


}
