#include <cmath>

bool is_prime(int n){


	for(int i = 2; i< sqrt(n); ++i){

		if(n%i == 0)return 0;

	}

	return 1;

}

int sum(int n){

	if(n == 0)return n;
	return n%10 + sum(n/10);

}

bool is_perfect_prime(int n){

	if(not is_prime(sum(n)) or n == 0 or n == 1)return 0;
	if(sum(n) == n)return 1;
	return is_perfect_prime(sum(n));


}

