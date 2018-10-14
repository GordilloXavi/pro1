#include <iostream>
using namespace std;

int abs(int n){return (n>0 ? n : -n);}

int main() {

	int n;

	bool b = 0;

	while(cin >> n){

		if(b)cout << endl;
		b = 1;

		for(int i = 0; i<n; ++i){
			for(int j = 0; j<n; ++j){


				int distD = min(abs(i-j), abs((n-1)-(i+j)));		


				int distB = 0;

				int bj = 0, bi = 0;

				if(i<= n/2)bi+=i;
				else bi += abs(i- n+1);

				if(j<=n/2)bj+=j;
				else bj += abs(j-n+1);

				distB += min(bj, bi);

				cout << min(distD, distB)%10;

			}cout << endl;

		}


	}



}



