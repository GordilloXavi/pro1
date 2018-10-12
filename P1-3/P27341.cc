#include <iostream>
using namespace std;

int main(){

	int a,b;
	

	while(cin >> a and cin >> b){

		int sum = 0;

		for(int i = a; i<=b; ++i){
			sum += i*i*i;
		}
		sum = (a>b) ? 0 : sum;
		cout << "suma dels cubs entre " << a << " i " << b << ": " << sum << endl;

	}
}