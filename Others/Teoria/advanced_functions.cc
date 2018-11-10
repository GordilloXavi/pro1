#include <iostream>
#include <functional>// std::function
#include <vector>


double MultBy2(double num){

	return num*2;	

}

double doMath(std::function<double(double)> myFunction, double num){//We can pass funtions as arguments for other functions

	return myFunction(num);

}

double MultBy3(double num){return num*3;}

int main(){
	
	auto times2 = MultBy2;//We can store funtions as variables

	std::cout << "5*2 = " << times2(5) << std::endl;

	std::cout << "6 * 2 = " << doMath(times2, 6) << std::endl;

	std::vector<std::function<double(double)>> funcs(2);

	funcs[0] = MultBy2;
	funcs[1] = MultBy3;

	std::cout << "2 * 10 = " << funcs[0](10) << std::endl;


}