#include <iostream>

class Person{

	private:

		std::string name ;//Name is PRIVATE
		//therefore, it can only be accessed by this class or by 
		//FRIEND CLASSES!

		friend class NameGetter;

	public:

		Person(std::string name){

			this -> name = name;

		}


};

class NameGetter{//Utility class, which means that it will rarely be 
	//created as an object (instancia de clase)


	public:

		NameGetter(){}


		static std::string getName(Person& xavi){

			return xavi.name;


		}


};



int main(){

	Person x("Xavier");

	

	std::cout << 	NameGetter::getName(x) << std::endl;

}