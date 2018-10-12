#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main(){

	int R, r;

	cin >>R >> r;

	double res = 3.14*3.14*2*R*r*r;

	cout << fixed <<  setprecision(2) << res << " cubic millimeters are needed\n";


}