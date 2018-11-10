#include <iostream>
#include <cmath>
#include <chrono>
#include <vector>
#include <ctime>


using namespace std;



void printOnlyPrimeFast(long int n){

	clock_t t;

	t = clock();
	
	auto start = chrono::high_resolution_clock::now();
	long int sq = int(sqrt(n)+1);
	
	if(n == 1 || n == 0){
		
		return;
	}
	if(n == 2)printf("%ld >> PRIME(f)\n", n);
	
	for(long int i = 2; i<=sq; i++){
	
		
		if(n%i == 0){
			
			auto finish = chrono::high_resolution_clock::now();
	
			return;
		}
			
	
	
		
	}
	
	
	printf("%ld >> PRIME(f) ", n);
	auto finish = chrono::high_resolution_clock::now();
	
	chrono::duration<double> elapsed = finish - start;

	t = clock()-t;

	int cs = CLOCKS_PER_SEC/1000000;


	printf(" \n// Clocked %d times in %f seconds (Clock speed: %.2fGHz).\n",int(t), (double)t/CLOCKS_PER_SEC, double(cs) );

	cout <<"// Real execution time:     " << elapsed.count() << " seconds." << endl;
}

int main(){
	

	unsigned long long int n;

	cout << "Input a number (recommended: +10e17): \n";

	cin >> n;
	
	//18446744073709551615


	

	while(true and n <= 18446744073709551615){
		
		printOnlyPrimeFast(n);
		
		n++;
		
	}

	cout << "Input too large.\n";
	
	
}