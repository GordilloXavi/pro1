#include <iostream>
#include <algorithm>
using namespace std;

int main(){

	string a, b;

	cin >> a >>b;

	int t = 0;

	for(int i = 0; i< a.size(); ++i){

		t += (a[i] == b[i]);

	}

	cout << t << endl;

}