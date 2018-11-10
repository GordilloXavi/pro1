#include <vector>
#include <iostream>


int main(int argc, char* argv[]){

	/*
	WE WILL EXECUTE COMMANDS FROM OUR C++ PROGRAM WITH 
	THE system("the command"); FUNCTION
	*/

	if(argc > 1){

		std::cout << "You passed the following arguments to the program:\n";

		for(int i = 1; i<argc; ++i){

			std::cout << argv[i] << ", ";

		}std::cout << std::endl;
	}else{

		std::cout << "You passed no arguments to the main function through the command line.\n";

	}

	std::string c;

	std::cout << "Type ### to end the program.\n";

	while(getline(std::cin,c) and c != "###"){

		char command[c.size()];

		for(int i = 0; i<c.size(); ++i){

		command[i] = c[i];

	}

	system(command);

	}

	


	

}