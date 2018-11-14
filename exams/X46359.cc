#include <iostream>
#include <math.h>
using namespace std;


int extract_odd_digits(int x) {

	int i = 0;
	int n = 0;

	while(x > 0){
		
		int m = x%10;

		if(m%2==1){
			n+= m*pow(10,i);

			i++;


		}

		x/=10;
	}

	return n;
}


int main() {
    int N;
    int suma = 0;
    while (cin >> N) {
        suma += extract_odd_digits(N);
    }
    cout << suma << endl;
}
