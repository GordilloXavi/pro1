#include <iostream>
using namespace std;

int main() {

	int r,c;
	string c2;
	bool w = true;
	cin >> r >> c;
	int tot = 0;

	for(int i = 0; i<r; i++){

		cin >> c2;

		for(int j = (!w); j<c2.size(); j+=2){

			int ch = int(c2[j]-'0');
			tot += ch;


		}		
		w = !w;


	}
	cout << tot << endl;



}