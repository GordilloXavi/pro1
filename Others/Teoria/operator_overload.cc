#include <iostream>

class Box{

	private: 

		static int boxNum;

	public:

		int boxId = 0;

		double length, width, breadth;

		std::string boxstring;

		Box(){

			length = width = breadth = 1;
			boxNum++;
			boxId = boxNum;
		}

		Box(double l, double w, double b){

			length = l, width = w, breadth = b;    			
			boxNum++;
			boxId = boxNum;
		}

		void toString(){

			printf("Box %d: %f, %f, %f.\n", boxNum, length, width, breadth);
		}

		Box& operator ++ (){
			//when you use the ++ operator with a Box object, this will happen

			length++;
			width++;
			breadth++;
			return *this;//Returns the new box with the new incremented parameters

		}

		Box operator + (const Box& box2){

			Box boxSum;

			boxSum.length = length + box2.length;
			boxSum.width = width + box2.width;
			boxSum.breadth = breadth + box2.breadth;

			return boxSum;

		}

		double operator [] (int x){// Box myBox(4,5,8);myBox[1] == 5; myBox[2] == 8 ...

			if(x == 0)return length;
			else if(x == 1) return width;
			else if(x == 2) return breadth;
			return 0; 

		}

		bool operator == (const Box& box2){

			if(length == box2.length and width == box2.width and breadth == box2.breadth){
				return true;}

			return false;

		}

		void operator = (const Box boxCopy){// Box box1, box2; box1 = box2;

			length = boxCopy.length;

			width = boxCopy.width;

			breadth = boxCopy.breadth;

		}

		void operator ! (){//Mala práctica, pero uso este operador como método toString();

			printf("Box %d: %f, %f, %f.\n", boxId, length, width, breadth);

		}




};

int Box::boxNum = 0;


int main(){

	Box box1(10,14,420);

	Box box2;

	++box1;

	!box1;
	!box2;

	std::cout << (box1 == box2) << std::endl;

	std::cout << box1[2] << std::endl;

	box2 = box1;

	!box2;



}