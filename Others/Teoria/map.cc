#include <iostream>
#include <map>

int main(){

	std::map<std::string, int> myMap;

	myMap["Hello"] = 1;
	myMap["Hola"] = 420;

	std::cout << myMap["Hola"] << std::endl;
	std::cout << myMap.at("Hola") << std::endl;

	for(auto& x : myMap)std::cout << x.first << " -> " << x.second << std::endl;

	


}
