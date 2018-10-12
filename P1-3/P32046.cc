#include <iostream>
#include <math.h>
using namespace std;


int main(){

	int n,m;
	int tot = 0;
	cin >> n;
	cout << "nombres que acaben igual que " << n << ":\n";
	while(cin >> m){

		if(n%1000 == m%1000){
			tot++;
			cout << m << endl;
		}

	}cout << "total: " << tot << endl;



}