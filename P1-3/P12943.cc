#include <iostream>
using namespace std;

int main(){

	int n;

	cin >> n;

	int a, b, c;

	a = b = c = 0;
	
	char h;

	for(int i = 0; i<n; ++i){

		cin >> h;

		if(h == 'a')a++;
		else if(h == 'b')b++;
		else c++;

	}

	int m = max(max(a,b),c);
	char mc;

	if(m == c)mc = 'c';
	if(m == b)mc = 'b';
	if(m == a)mc = 'a';
	

	printf("majoria de %c\n%d repeticio(ns)\n",mc,m );


}