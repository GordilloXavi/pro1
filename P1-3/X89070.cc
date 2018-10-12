#include <iostream>

using namespace std;

int main(){

	int a, b, c;

	cin >> a >> b >> c;

	int s = c;

	if(a <= b and a <= c)s=a;
	else if(b <= a and b <= c)s=b;

	if(a >= b and a >= c)s+=a;
	else if(b >= a and b >= c)s +=b;
	else s +=c;
	
	cout << s << endl;

}