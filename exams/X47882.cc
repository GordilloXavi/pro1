#include <iostream>
using namespace std;


int main(){

	int n; 

	while(cin >> n){
		int x;
		int prev = 0;
		int s = 0;

		for(int i = 0; i<n; ++i){

		cin >> x;

		if(x%2 == 0)s+= prev;

		prev =x;

	}
	cout << s << endl; 
	}
}
