#include <iostream>
#include <iomanip>

using namespace std;

int main(){

	
	int a;

	cin >> a;

	while(a >= 16){

		int s = a%16;

		if(s <10)cout << a%16;
		else cout <<char(s%10 + int('A'));


		a /=16;
	}
	if(a <10)cout << a << endl;
	else cout << char(a%10 + int('A')) << endl;

}