#include <iostream>



//########################################
//##			ANIMAL CLASS			##
//########################################


class Animal{

	private: //Only accessible inside of the class, aka you cant do Object::height.

		std::string name;
		double height;
		double weight;

		static int numberOfAnimals;

	//Static variables are shared by all objects of the class

	public: //accessible from outside of the class



		std::string getName(){return name;};

		void setName(std::string name){this->name = name;};
		//-> pointer operator: accesses class fields. we need this to distinguish the two name variables

		double getHeight(){return height;};
		//In this case, we do not deed this-> because there are no name conflicts

		void setHeight(double height){this->height = height;};

		double getWeight(){return weight;};

		void setWeight(double w){weight = w;};
		//See, when the variables have different names they dont need this->

		void setAll(std::string, double, double); 
		//We inicialize the method here and we write the code outside of the funcion
		//It doesnt matter, its just another way to do it.
		//When inicializing any function you dont need to write variable names, just data types

		Animal();//Constructor with no parameters.

		Animal(std::string, double, double);

		//This is the constructor. It has the same name as the class
		//You can also overload constructors (line 41) with different parameters.

		

		~Animal();//THIS IS A DECONSTRUCTOR.
		//It is used to delete an object to free memory and so on..
		//The deconstructor can have parameters and more functionalities,
		//Just like the constructor.

		static int getNumberOfAnimals(){return numberOfAnimals;};
		//Static variables can only be accessed by static methodds.

		void ToString();


};


int Animal::numberOfAnimals = 0;//you refer to your object fields with class::field

void Animal::setAll(std::string name, double height, double weight){

	this->name = name;

	this->height = height;

	this->weight = weight;

	Animal::numberOfAnimals ++;

}

//WE PREVIOUSLY DECLARED ALL THESE FUNCTIONS AND CONSTRUCTORS INSIDE THE CLASS

Animal::Animal(std::string name, double height, double weight){

	this->name = name;

	this->height = height;

	this->weight = weight;

	Animal::numberOfAnimals ++;


}

Animal::Animal(){//As you can see, the default constructor gives defeult values to the fields
//That can later be changed with setAll and other setter methods
	this->name = "";

	this->height = 0;

	this->weight = 0;

	Animal::numberOfAnimals ++;

}

Animal::~Animal(){//TODO: Add code to actually destroy the animal and free memory

	std::cout << "Animal " << this -> name << " destroyed." << std::endl;

}

void Animal::ToString(){//ToString is an already existing method. 
	//We can overwritee methods to fit out needs. 

	std::cout << this -> name << " is " << 

	this -> height << " cm tall and " << this->weight <<

	"kg heavy.\n";


}

//########################################
//##			DOG CLASS	     		##
//##		  INHERITS ANIMAL 			##
//########################################


class Dog: public Animal{

	private:

		std::string sound = "woof!";

	public: 

		void makeSound(){

			std::cout << getName()<< " says " << sound << std::endl;

		}
		void setSound(std::string sound){this -> sound = sound;};

		Dog(std::string, double, double, std::string);//Our dog constructor

		Dog() : Animal(){};
		//This constructor without paramaters will call the animal constructor 
		//on line 86!!!! therefore all the values except for sound will be given the 
		//Default value


		void ToString(){//We can, again, overwrite the method to suit our class

			std::cout << getName() << " is a dog, " << 

		getHeight() << " cm tall and " << getWeight() <<

		" kg heavy.\n";


		}


		//we dont need a decosntructor for this class, because the deconstructor
		//Os the master-class animla works fine for all sub-classes

};

Dog::Dog(std::string name, double height, double weight, std::string sound):Animal(name, height, weight){this -> sound = sound;}

//This lets the animal class inicialize all the values which dog inherits,
//and then we inizialize sound manually






//########################################
//##		MAIN CLASS BELOW   		    ##
//##		  		!!!					##
//########################################



int main(){

	Animal dimo;

	dimo.ToString();

	dimo.setAll("diego", 420, 69);

	dimo.ToString();

	
	Dog dog1("doggy", 40,80, "my cohppa hate niggas");

	dog1.ToString();
	dog1.makeSound();

	std::cout << "Number of animals: " << Animal::getNumberOfAnimals() << std::endl;
	



}