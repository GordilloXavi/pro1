#include <iostream>
#include <algorithm>
using namespace std;

int main(){

	int n,m;

	cin >> n >> m;

	int s1 = 0;
	int s2 = 0;

	for(int i = 0; i<m; ++i){

		s1+= n+1+i;
		s2 += n-1-i;

	}

	cout << s1 << " " << s2 << endl;

}