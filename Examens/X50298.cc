#include <iostream>
using namespace std;


int main() {

	int n;
	int i = 1;
	string s;

	cin >> n;

	while(cin >> s){

		if(i%n == 0)cout << s << endl;

		i++;

	}


}
