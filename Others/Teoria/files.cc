#include <iostream>
#include <fstream>



int main(){

	
	std::fstream fileManager;

	std::string writeText(""), readText("");//We will temporarily store text here

	fileManager.open("test.txt", std::fstream::out | std::fstream::trunc);
	//If the file "test.txt" doees not exist, we create a new one.
	//with "| std::ios_base::trunc" we remove all content in the file.

	if(fileManager.is_open()){

		fileManager << "Estoy escribiendo un archivo !!!!\n";

		std::cout <<"Enter what you want to write:\n";

		getline(std::cin, writeText);

		fileManager << writeText << std::endl;

		fileManager.close();

	}

	fileManager.open("test.txt", std::fstream::in);

	if(fileManager.is_open()){

		while(fileManager.good()){//good() is true if we havent reached the end of the file.

			getline(fileManager, readText);

			std::cout << readText << std::endl;

		}

	}

	fileManager.close();








//	##################
//	#	COMMANDS!	 #
//	##################

	/*

	ios::app : Append at the end of the file.
	ios::trunc : Delete all content in file.
	ios::in : Open file for reading.
	ios::out : Open file for writing.
	ios::ate : Open file for writing and move to the end of the file.
*/

}