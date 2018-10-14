#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n){

	if(n == 0 or n == 1)return 0;

	for(int i = 2; i<int(sqrt(n)+2); ++i){
	
		if(n%i==0)return 0;

	}

	return 1;

}

int dig_sum(int n){

	int s = 0;

	while(n>0){

		s+= n%10;
		n/=10;

	}


	return s;
}




bool is_perfect_prime(int n){

	if(n<10){
	
		return isPrime(n);

	}

	return (isPrime(n) and is_perfect_prime(dig_sum(n))); 




}


int main() {

	int n;

	while(cin >> n)cout << is_perfect_prime(n) << endl;	


}
