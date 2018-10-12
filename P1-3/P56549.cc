#include <iostream>
using namespace std;

void conv(int n, int b){



	if(n<b){
		if(b == 16 and n>=10)cout << char(65+n%10);
		else cout << n;
	}
	else{

	conv(n/b, b);
	if(b == 16 and n%b>=10)cout << char(65 + n%b%10);
	else cout << n%b;

	}


}



int main() {


	int n;

	while(cin >> n){

	cout << n << " = ";
	conv(n,2);
	cout << ", ";
	conv(n,8);
	cout << ", ";
	conv(n,16);
	cout << endl;


	}



}