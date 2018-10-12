#include <iostream>
using namespace std;



int main() {

	int n;
	cin >> n;
	int s = n;

	int odd = n%10;
	n/=10;
	bool c = false;
	while(n>0){
		if(c)odd += n%10;
		n /= 10;
		c = !c;
	}
	

	cout << s << (odd%2 ?  " IS NOT COOL\n" : " IS COOL\n");


}