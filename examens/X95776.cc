#include <iostream>
#include <math.h>
using namespace std;

int convert_to_odd_digits(int x) {

	int num = 0;
	int c = 0;

	while(x > 0){
	
		int i = x%10;

		if(i%2==0)i++;

		x/=10;

		num+=i*pow(10,c);
	
		c++;
	}


	return num;
}

int main() {
    int n;
    int max = 0;
    while (cin >> n) {
        int v = convert_to_odd_digits(n);
        if (v > max) max = v;
    }
    cout << max << endl;
}
