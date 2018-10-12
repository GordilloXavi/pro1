#include <iostream>
#include <math.h>
#include <iomanip>
int main(){

	double a,b,c;

	std::cin >> a >> b >> c;

	double t = b*b - 4*a*c;

	if(t<0)std::cout << "It has complex Roots!\n";
	else{

		double x1 = (-b + sqrt(t))/(2*a);
		double x2 = (-b - sqrt(t))/(2*a);

		std::cout << std::fixed << std::setprecision(2) 
		<< "x_+ = " << x1 << "; x_- = " << x2 << "\n";


	}



}