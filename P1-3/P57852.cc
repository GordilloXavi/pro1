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


int gcd4(int a, int b, int c, int d){

	int d1 = gcd(a,b);
	int d2 = gcd(c,d);

	return gcd(d1,d2);

	

}
