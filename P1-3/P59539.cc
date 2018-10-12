#include <iostream>
#include <iomanip>

using namespace std;

int main(){

	
	cout << fixed << setprecision(4);

	int n;

	cin >> n;

	double h;

	for(int i = 1; i<=n; ++i){

		h += double(1)/i;

	}

	cout << h << endl;

}