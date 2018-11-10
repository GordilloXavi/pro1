#include <iostream>


class Shape{

	protected: //Protected: only the subclasses of shape and Shape will be able to access this information
	//Private doesnt allow subclasses to access the info.

		double height;
		double width;

	public:

		Shape(double& length){

			height = width = length;

		}

		Shape(double& h, double& w){

			height = h;

			width = w;

		}


		virtual double  Area() {return height * width;}
		//the virtual keyword is used to make work the function in line 46,
		//which recieves a Shape parameter. If you give it a Circle object,
		//with the virtual keyword it will use tha Area() function in the Circle class
		//Here we use it because different shapes may have different area formulas

};

class Circle :public  Shape{

	public: 

		Circle(double rad) : Shape(rad){}
		//This makes this constructor equal to the constructor from the Shape class

		double Area() override{return 3.14159 * height*height;}

};

class Rectangle :public Shape{

	public: 

		Recatngle(double& h, double& w) : Shape(h,w){}

		double Area() override{return height*width;}


};

class Square : public Rectangle{

	public:

		Square(double h){

			height = width = h;


		}
		Square(double h, double w) : Rectangle(h,w){}

		double Area() override final{return height * height;}

		//FINAL KEYWORD: meand that classes that inherit from square
		//(Shape -> Rectangle -> Square -> ...) can no lonher override the
		//Area() method!!

};


void getArea(Shape& shape){//This function will work with any Shape object
	//Or any objeect that inherits from Shape class, aka Circle

	std::cout << "Area: " << shape.Area() << std::endl;


}


int main(){

	Shape square(10,10);

	Circle circle(1);

	getArea(circle);
	getArea(square);

	std::cout << "hi";

	//you can see that the areas are correctly displayes despite the 
	//area formulas being different.
	//If you remove the virtual keyword(line 29) the circle area will be incorrect
	//because the getArea() funtion will get the Area() function from Shape class
	//instead of Circle class


}