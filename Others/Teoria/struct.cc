#include <iostream>

struct Shape{

	private:

		int id;

	

	public:

	double length, width;

	Shape(double length = 1, double width = 1){//constructor

		this -> length = length;

		this -> width = width;

	}

	double Area(){return length * width;}



};//Struct is similar to class but I dont really know the difference

struct Circle : Shape{//Structs also have inheritance

	Circle(double width){

		this -> width = width;


	}

	double Area(){return 3.14159 * width/2 * width/2;}
};





int main(){

	Shape rectangle(10,20);

	std::cout << rectangle.Area() << std::endl;

	Circle circle(2);

	std::cout << circle.Area() << std::endl;

}