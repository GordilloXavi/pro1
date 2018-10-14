#include <iostream>
#include <fstream>
#include <string>
#include <cstring>


//##############################
//####### 	  README 	  ######
//##############################


//Pro1 GIT repositories:
//https://github.com/GordilloXavi/pro1
// https://github.com/dumitrux/PRO1-jutge-FIB
/*


	-Run the program and pass an argument that is the code of the program that you want to get the results  from.


	THIS PROGRAM WILL:

	1-Compile the code you pass if it exists "program_code -o .program.x"

	2-Run that code, asking for input if needed 

	3-Write the output to the file ".program.out"

	4-Erase the executable file ".program.x"

	5-Read the output from the file and print it to the screen


	TODO: Instead of the program expecting you to already have the .cc file in the directory,
	pull the program from a server using the program code (that you pass as an argument to the executable) 
	as a search parameter

*/

std::string make_command(std::string code){

	std::string url1 = "g++ ";
	std::string url2 = ".cc -o .program.x\n./.program.x > .program.out";

	std::string res = url1 + ".program" + url2;

	return res;


}


std::string toStr(const char *argv[], int size){//Will return an url "[Tema]/[program_name].cc"

	std::string w = "";
    
    bool b = false;

	for(int i = 1; i< size; ++i){
        

		if(b) w+= argv[i];
        
        if(*argv[i] == '/')b = true;

	}

	return w;



}

std::string toUrl(const char *argv[], int size){//Will return an url "[Tema]/[program_name].cc"

	std::string w = "https://github.com/dumitrux/PRO1-jutge-FIB/tree/master/";
	for(int i = 1; i< size; ++i){

		w+= argv[i];
        

	}

	    
    	std::string url1 = "curl ";
	std::string url2 = ".cc >> .program.cc";

	std::string res = url1 + w + url2;

	return res;



}

int main(int argc, char const *argv[]){//Argument has to be "P2-FirstLoops/P27341"

	std::string program_code = "";

	if(argc > 1){//Will only run if at least 1 parameter is passed

	program_code = toStr(argv, argc);

	program_code = make_command(program_code);

	std::string url = toUrl(argv, argc);
        
        char x[url.size()];
        
        std::strcpy(x,url.c_str());
        
        
        //x contains the command for the given url1
        
        system(x);//Executes the instruction "curl foo.cc >> .program.x"
        
        
        char tab2[program_code.size()];

	std::strcpy(tab2, program_code.c_str());

	system(tab2);//Compile program

	std::ifstream inputFile;


	inputFile.open(".program.out", std::fstream::in);

	if(inputFile.is_open()){

		while(inputFile.good()){//good() is true if we havent reached the end of the file.

			std::string readText = "";

			getline(inputFile, readText);

			std::cout << readText;
		
		}

	}

	inputFile.close();

	//remove executable file

	remove(".program.x");

	remove(".program.cc");

	remove(",program.out");

	} else	std::cout << "Pass the names of the file as a parameter.\n";
	



	//system("g++ program_code.cc -o .program.x\n./.program.x > .program.out");
	//Program_code.cc will have to be replaced with the string program_code

	//.program.out contains the outputs of .program.x, which you will have yo type manually

	
	return 0;
}

    
    
    

