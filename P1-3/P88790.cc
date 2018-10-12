#include <iostream>
using namespace std;


	int gcd(int a, int b){

		if(!a or !b)return a+b;

		int M = max(a,b);
		int m = min(a,b);

		while(m!=0 and M!=0){

			int t = M;
			M = m;
			m = t%M;

		}

		return M;

	}

