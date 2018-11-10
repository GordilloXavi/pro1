#include<iostream>
#include<vector>
#include <string>
#include <sstream>

std::vector<std::string> stirngToVect(std::string input_string, char separator){

//Convierte un string con varias palabras separadas por espacio
//en un venctor que almacena cada una de esas palabras:
// "hola me llamo xavi" -->  {"hola","me","llamo","xavi"}

	std::vector<std::string> output_vect;

	std::stringstream ss(input_string);

	std::string individual_string;

	while(getline(ss, individual_string, separator))output_vect.push_back(individual_string);
	//Función getline() y objeto stringstream son importantes para problemas así

	return output_vect;

}


int main(){

	std::string s = "hola, somos unas cuantas palabras y nos vamos a meter en un veector";

	std::vector<std::string> v1 = stirngToVect(s, ' ');

	for(std::string st : v1 )std::cout << st;

	std::cout << std::endl;



}

