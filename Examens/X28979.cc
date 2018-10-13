#include <iostream>
using namespace std;


int main() {

	int n;

	int pos = 1;

	while(cin >> n)	{
		
		if(n % 2 == 0 and pos % 3 == 0)cout << n << endl;

		pos ++;
	}	
}
