#include <iostream>
using namespace std;

void escriu_triangle(int t){

		bool b = 0;
		for(int i = t-1; i>=0; --i){
			b = 1;
			for(int j = i*2+1; j>0; --j){

				cout << " ";

			}

			for(int j = 0; j<t-i; ++j)cout << "/\\  ";
			cout << endl;

			//bottom


			for(int j = 0; j<2*i; ++j){
				cout << " ";
			}
			for(int j = 0; j<t-i; ++j)cout << "/__\\";
			cout << endl;



		}if(b)cout << endl;


}

int main() {

	int n;

	while(cin >> n){
		
		escriu_triangle(n);


	}


	



}