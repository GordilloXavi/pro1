#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>
using namespace std;

int reverse(int n){

	string s = to_string(n);
	reverse(s.begin(), s.end());
	return stoi(s);

}

bool prime(int n){

	int s = sqrt(n);

	for(int i = 2; i<=s+1; ++i)if(n%i == 0)return false;

	return true;

}

bool palindromic(int n){
	string r = to_string(n);
	string h = to_string(n);
	reverse(h.begin(), h.end());
	return (h == r);

}


void isEmrip(int n){

//It is prime
//The reversed is prime
//It is not palindromic
	int r = reverse(n);

	if( prime(n) and prime(reverse(n)) and !palindromic(n)){
		cout << n << " is an emirp number\n";
	}else cout << n << " is not an emirp number\n";

}

int main(){

	int n;

	cin >> n;

	isEmrip(n);

}