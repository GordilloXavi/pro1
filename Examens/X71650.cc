#include <iostream>
using namespace std;


int main() {

	int n, spos = 0, sneg = 0;


	while(cin >> n){

		if(n > 0)spos+=n;
		else sneg += n;


	}

	cout << "Sum Pos: " << spos << endl;
	cout << "Sum Neg: " << sneg << endl;


}
