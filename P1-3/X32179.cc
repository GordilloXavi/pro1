#include <iostream>
using namespace std;


int main() {

	bool ev = 0;
	int i = 0;
	int sec, n, count = 0;

	while(cin >> n){

		if(i == 1)sec = n;

		if(n == sec and ev)count++;

		ev = !ev;
		++i;

	}

	cout << count << endl;

}