#include <iostream>
using namespace std;


int main(){

	int n, m;

	bool b = 0;

	while(cin >> n >> m){

		if(b)cout << endl;
		
		b = 1;

		for(int i = 0; i<n; ++i){
		
			for(int j = 0; j<m; ++j){
	
				int distC = min(i, n-1-i)   +   min(j, m-1-j);

				int distM = 0;

				if(i <= n/2)distM += n/2-i;
				else distM += i-(n/2);

				if(j <= m/2)distM+= m/2-j;
				else distM+= j-(m/2);

				cout << (min(distM, distC))%10;

			}cout << endl;

}	}	}



//
//int distM = abs(i - (n/2+1)) + abs(j - m/2+1);
//int distC = min(abs(n/2+1-i),i) +  min(abs(n/2+1-j),(j)); 
