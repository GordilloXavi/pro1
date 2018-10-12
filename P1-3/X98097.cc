#include <iostream>
using namespace std;

int ev(int n){

	int e = 0;
	bool b = false;
	while(n>9){
		e += b ? n%10 : 0;
		n /= 10;
		b = !b;
	}
	if(b)e+=n;
	return e;
}

int odd(int n){

	int e = n%10;
	n /= 10;
	bool b = false;
	while(n>9){
		e += b ? n%10 : 0;
		n /= 10;
		b = !b;
	}
	if(b)e+=n;
	return e;
}

void op(int a, int b){

	int m = min(a,b);
	int M = a+b-m;
	int d = a == 0 or b == 0 ? 0 : -1;


	for(int i = 0; i<M;++i)if(i*m == M)d = i;

	if(d == -1)cout << "nothing\n";
	else if( d == 0)cout << 0 << " = " << m  << " * " << M << endl;
	else cout << M << " = " << d << " * " << m << endl;


}

int main(){

	int n;

	cin >> n;

	int o = odd(n), e = ev(n);

	cout << odd(n) << " " << ev(n) << endl;
	op(o,e);

}