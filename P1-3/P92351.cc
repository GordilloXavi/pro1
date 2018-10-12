#include <iostream>
using namespace std;

int main(){

	int num, denom;
	
	cin >> num >> denom;
	
	if(num>= 0)cout << num/denom << " " << num%denom << endl;
	
	else{
		
		if(num%denom != 0)cout << int(num/denom) -1 << " " << num-denom*(int(num/denom) -1) << endl;
		else cout << int(num/denom)  << " " << num-denom*(int(num/denom) ) << endl;
	}

}