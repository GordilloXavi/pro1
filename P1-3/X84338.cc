#include <iostream>
using namespace std;

int dig(int n){

	int dig = 1;

	while(n>9){
		n/=10;
		dig++;
	}

	return dig%2 == 0 ? dig : 0;

}

void h(int n, int d){

	int h1 = 0, h2 = 0;

	for(int i = 0; i<d/2; ++i){

		h2 += n%10;
		n /= 10;
	}
	for(int i = 0; i<d/2; ++i){

		h1 += n%10;
		n /= 10;
	}
	if(d == 0)cout << "nothing\n";
	else if(h1>h2)cout << h1 <<" > " << h2 << endl;
	else if(h1 < h2)cout << h1 <<" < " << h2 << endl;
	else cout << h1 <<" = " << h2 << endl; 


}

int main() {

	int n; 

	cin >> n;

	int d = dig(n);

	h(n,d);



}