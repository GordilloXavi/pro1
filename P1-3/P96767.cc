#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main(){

	double x, n;
	
	double result = 0;
	int p = 0;
	cin >> x;
	
	while(cin >> n){
	
	result += n*pow(x,p);
	p++;
	}
	
	cout << fixed;
	cout << setprecision(4);
	cout << result << endl;

}