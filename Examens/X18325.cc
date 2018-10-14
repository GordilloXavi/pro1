#include <iostream>
using namespace std;


int main(){
	
	int a,b;

	int in = 0, out = 0;

	cin >> a >> b;

	int x; 

	while(cin >> x){

		if(x >= a and x <= b)in+=x;
		else out++;

	}

	cout << "Sum Inside: " << in << endl << "Num Outside: " << out << endl;

	


}
