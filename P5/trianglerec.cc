#include <iostream>
using namespace std;

void triangle(int n, int espai){ // espai == n*2-1

	if(espai == 0){
		
		cout << ' ';
		for(int i = 0; i<n; ++i){
			
			cout << "/\\  ";

		}cout << endl;

		for(int i = 0; i<n; ++i){
			
			cout << "/__\\";			

		}cout << endl;


	}
	
	else{
		
		cout << espai << endl;		
	
		triangle(n, espai-1);

		for(int i = 0; i<espai; ++i )cout << ' '; // i< espai
		cout << endl << ' ';

		for(int i = 0; i<espai-1; ++i)cout << "/\\  ";//espai/2

		cout << endl;

		for(int i = 0; i< espai-1; ++i)cout << "/__\\";

		cout << endl;




	}


}

int main(){

	int n;

	while(cin >> n)triangle(n, n*2-1);
	

}




