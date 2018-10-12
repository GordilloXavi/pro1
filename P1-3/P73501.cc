#include <iostream>
using namespace std;


int main() {

	int n,c;

	cin >> n;

	for(int i = 0; i<n;++i){
		int last = 0;
		int p = 0;
		while(cin >> c and c != 0){

			
			if(c>last)p++;

			last = c;


		}cout << (p==0 ? 0 : p-1) << endl;

	}


}