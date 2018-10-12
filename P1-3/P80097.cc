#include <iostream>
using namespace std;

void pinta_rusc(int f, int c){

	for(int i = 0; i<f; i++){
		if(i == 0){
		for(int j = 0; j<c; ++j){

			cout << " _";
			if(j != c-1)cout << "  ";

		}cout << endl;
		}
		for(int j = 0; j<c; ++j){

			cout << "/ \\";
			if(j != c-1)cout << "_";

		}cout << endl;
		for(int j = 0; j<c; ++j){

			cout << "\\_/";
			if(j != c-1)cout << " ";

		}cout << endl;//?????

	}

}

int main(){

	int a,f;
	bool b = 0;
	while(cin >> a >> f){
		if(b)cout << endl;
		b = 1;
		pinta_rusc(a,f);
	}


}