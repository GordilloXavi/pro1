#include <iostream>
#include <string>
#include <ctime>

void drawTree(int n);


int main(){

//	##########################
// 	##		EXCEPTIONS		##
//	##########################

	int n;

	std::cin >>n;	
	//If n = 0 the program will crash (Floating point exception (core dumped)

	try
	{

	if(n == 0)throw "Division by 0 not allowed";

	else printf("%d / %d = %.2f\n", 1, n, double(1)/n);

	}
	catch(const char* exp)
	{

	std::cout << "Error: " << exp << std::endl;

	}









//	##########################
// 	##		CONTINUE		##
//	##########################

	for(int  i = 0; i<10; i++){

		std::cout << "This Will be Printed\n";
		continue;
		std::cout << "This Will NEVER be Printed\n";
	//The continue keyword sends the program back to the beggining of the loop

	}



}

void drawTree(int n){

	for(int i = 0; i< n; i++){

		for(int j = 1; j<n-i; j++)std::cout << " ";
		for(int k = 0; k<=i*2; k++)std::cout << "#";
		std::cout << "\n";

	}
	for(int i = 0; i<n-1; i++)std::cout << " ";
	std::cout << "#\n";





}
