#include <iostream>
#include <climits>
using namespace std;


int main() {
	
	int a,b,c, last = INT_MAX;

	bool saw = true;

	while(cin >> a and a != 0){

		cin >> b;

		if(!b)break;

		cin >> c;

		if(!c)break;

		if(!(a<last and b>a and c>b))saw = false;

		last = c;

	}

	if(saw)cout << "SAW\n";
	else cout << "NOT SAW\n";


}
