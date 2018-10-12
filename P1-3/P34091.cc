#include <iostream>
using namespace std;


bool is_perfect(int n){

	int div = n/2;

	//int p = n;

	int s = 0;

	while(div>=1){

		if(n%div==0){
			s+=div;
			//printf("div = %d\n", div);
		}
		div--;


	}

	return s == n and n;


 }

int main() {

	int n;

	while(cin >> n){

		cout << is_perfect(n) << endl;

	}


}