#include <iostream>
#include <cmath>
using namespace std;

int digits(int n){

	if(n < 10)return 1;

	return 1+ digits(n/10);

}


bool is_palindromic(int n){

	if(n < 10)return true;

	int dig = digits(n);

	int p = pow(10,dig-1);

	if(n/p != n%10)return false;

	return is_palindromic((n%p)/10);

}


int main() {

	int n;

	while(cin >> n){

		cout << is_palindromic(n) << endl;

	}


}