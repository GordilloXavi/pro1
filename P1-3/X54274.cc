#include <iostream>
using namespace std;


int main() {

	int a,b,c,d;

	int increasing = 0;
	int folded = 0;

	while(cin >> a >> b >> c >> d){

		if(a<b and b<c and c<d){
			increasing++;
		}
		if(a == c and b == d){
			folded++;
		}

	}

	cout << "Increasing: " << increasing << endl
		 << "Folded: " << folded << endl;

}