#include <iostream>
#include <vector>

using namespace std;

typedef vector< vector <int> > Matrix;

Matrix read_matrix(int n, int m) {

  
  Matrix matriu(n, vector<int>(m));

  for(int i = 0; i<n; ++i){

  	for(int j = 0; j<m; ++j){

  		cin >> matriu[i][j];

  	}

  }

  return matriu;

}

bool even_odds_matrix (const Matrix& M) {

	int rows = M.size();
	int cols = M[0].size();


	int ev = 0;
	int odd = 0;
  
	for(int i = 0; i<rows; ++i){

		for(int j = 0; j < cols; ++j){

			if(i % 2 == 0){
				if(M[i][j] % 2 == 0)ev += M[i][j];
			}
			else{

				if(M[i][j] % 2 != 0) odd += M[i][j];


			}


		}

	}

	

	return ev == odd;




}

int main() {  
  
	int a,b;

	while(cin >> a and cin >> b){

		Matrix m = read_matrix(a,b);

		if(even_odds_matrix(m) == true)cout << "true" << endl;
		else cout << "false" << endl;
	}


}