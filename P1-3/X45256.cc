#include <iostream>
using namespace std;


int main(){

	char c;
	double s;
	cin >> c >> s;

	if(c == 'M'){
		if(s <44)s-=34.5;
		else s-=35;
	}else{
		if(s<40)s-=31.5;
		else s-= 32;
	}
	cout.setf(ios::fixed);
	cout.precision(1);

	cout << s << endl;

}