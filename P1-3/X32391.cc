#include <iostream>
using namespace std;

int main(){

	int a,b,c,d;
	

	cin >> a >> b >> c;

	int bal = b;
	int w = 0;

	for(int i = 0; i<c; i++){

		cin >> d;

		bal +=(d-a);
		w+= (bal>0);

	}
	cout << w << endl;

}