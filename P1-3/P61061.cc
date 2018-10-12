#include <iostream>
using namespace std;

int producte(int n){

	int producte = 1;
	
	while(n!=0){
		producte *= n%10;
		n = n/10;
		
	}
	return producte;
}

int main(){

	long int n;
	while(cin >> n){
		if(n/10 == 0) cout << "The product of the digits of " << n << " is " << n <<"." << endl;
		while(n/10 != 0){
		cout << "The product of the digits of " << n << " is " << producte(n) <<"." << endl;
		n = producte(n);
		}
		cout << "----------" << endl;
	}
}