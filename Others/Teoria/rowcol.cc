#include <iostream>
#include <vector>
#include <string>

using namespace std;

typedef vector<vector<int>> Matrix;

int main(){

	int n, m;

	cin >> n >> m;

	Matrix mat(n);

	for(int i = 0; i<n; ++i){

		for(int j = 0; j<m; ++j){

			cin >> mat[i][j];


		}


	}
	
	String s;

	int  x;

	while(cin>>s){

		cin >> x;

		if(s == "row"){

			cout << "row " << x << ":";

			for(int i = 0; i<m; ++i)cout << " " << mat[n-1][i];
			cout << endl;

		}else if(s == "column"){

			cout << "column " << x << ":";

			for(int i = 0; i<n; ++i)cout << " " << mat[i][n-1];
			cout << endl;

		}else{

			int h;

			cin >> h;

			cout << "element " << x << " " << h << ": " << mat[x-1][h-1] << endl;

		}




	}



}