#include <iostream>
using namespace std;


int main(){
	
	int n;

	while(cin>>n){

		for(int i = 0; i<n; ++i){
			cout << (i == 0 or i == n-1 ? '+' : '-');
		}cout << endl;

		
		for(int i = 0; i<n-2;++i){
		

				cout << '|';
				for(int j = 0; j<i; ++j)cout << ' ';
				cout << '\\';//Possible issue
				for(int j = 0; j<n/2-2*i; ++j)cout << ' ';
				cout << '/';
				for(int j = 0; j<i; ++j)cout << ' ';
				cout << '|';
				cout << endl;
				


			

		}

			for(int i = 0; i<n-2; ++i){




				cout << '|';
				for(int j = 0; j<n/2-2*i; ++j)cout << ' ';
				cout << '/';//Possible issue
				for(int j = 0; j<i*2; ++j)cout << ' ';
				cout << '\\';
				for(int j = 0; j<n/2-2*i; ++j)cout << ' ';
				cout << '|';
				cout << endl;

			}




		for(int i = 0; i<n; ++i){
			cout << (i == 0 or i == n-1 ? '+' : '-');
		}cout << endl;



	}


}
