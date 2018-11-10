#include <iostream>
using namespace std;


int main(){
	
	int p = 0, n = 0, t = 0;

	int x;

	while(cin >> x){

		t++;

		p+= x>0;
		n+= x<0;

	}

	cout << "Pos: " << p << endl << "Neg: "  << n << endl << "Tot: " << t << endl; 


}
