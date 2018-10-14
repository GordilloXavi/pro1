#include <iostream>
using namespace std;

int abc(int n){return (n>0 ? n : -n);}


int main() {

	int n,x;


	while(cin >> n){

	int prev = 0;

	int max = 0;
	for(int i = 0; i<n; ++i){


		cin >> x;

		if(!i)prev = x;
		max = (max < abc(x-prev) ? abc(x-prev) : max);

		prev = x;
	}

	cout << max << endl;

	}
}
