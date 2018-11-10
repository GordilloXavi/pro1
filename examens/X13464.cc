#include <iostream>
using namespace std;


int main() {

	int n;

	int i = 0;

	while(cin >> n)for(i = 0; i<n; ++i)for(int j = 0; j<n; ++j)cout << (i ? "\n" : "") << min(min(abs(i-j), abs((n-1)-(i+j))), min(min(i,j), n-max(i,j)-1))%10 << (j == n-1 ? "\n" : "");
}
