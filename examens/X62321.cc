#include <iostream>
using namespace std;

int num_max_digits(int a, int b){

	if(a<10 or b<10)return (a>b ? a : b);

	if(a%10 > b%10){

		return 10*num_max_digits(a/10, b/10) + a%10;

	}else{

		return 10*num_max_digits(a/10, b/10) + b%10;

	}

}

int main() {

	int a, b;

	while(cin >> a >> b){

	cout << num_max_digits(a,b) << endl;

	}

}
