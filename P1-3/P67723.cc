#include <iostream>
using namespace std;

int gcd(int n, int m){
	if(n== 0 or m == 0)return n+m;
	return gcd(m, n%m);
}

int main() {

	int a,b;

	cin >> a >> b;

	printf("The gcd of %d and %d is %d.\n", a,b,gcd(a,b));

}