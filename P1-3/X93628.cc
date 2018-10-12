#include <iostream>
using namespace std;

int main() {

	int n;
	
	while(cin >>n){
	bool b = 1;
	for(int i = 0; i<n; ++i){
		for(int j = 0; j<n; ++j){
			cout << (b ? '.':'x');
			b = !b;
		}if(n%2 == 0)b = !b;
		cout << endl;
	}cout << endl;
}
}