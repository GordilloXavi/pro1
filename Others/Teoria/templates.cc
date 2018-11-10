#include <iostream>
#include <iterator>

#define PI 3.14159

#define AREA_CIRCLE(radius) (PI *radius*radius)

//Templates are functions that can work with different data types / objects.

template<typename T>
void Times2(T value){

	std::cout << value*2 << std::endl;

}

template<typename T, typename U>//You need to write this before every generic function
T Add(T val1, U val2){//Así posemos sumar int + double, double + char...

	return val1 + val2;

}

template<typename T, typename U>
class Person{

	public:

		T height;
		U weight;
		static int numOfPeople;

	Person(T h, U w){

		height = h;

		weight = w;

		numOfPeople++;

	}

	void getData(){

		std::cout << "Height: " << height << ", Weight: "
		<< weight << std::endl;


	}


};
template<typename T, typename U> int Person<T, U>::numOfPeople;



int main(){
	
	std::cout << AREA_CIRCLE(1) <<  std::endl;

	Times2(2);

	Times2(1.5);

	Times2('A');

	std::cout << Add(1.5,9) << std::endl;

	Person<double,int> mikeTyson(5.83, 216);//We need to specify
	//what datatypes we will pass to the constructor.

	mikeTyson.getData();

	std::cout << "Number of people: " << mikeTyson.numOfPeople << std::endl;
//you can access static values with an object or like this:

	std::cout << "Number of people: " << Person<double,int>::numOfPeople << std::endl;
//The first method will only work with generic static class fields,
//never with regular class fields


}
