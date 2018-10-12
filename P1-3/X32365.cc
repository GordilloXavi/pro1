#include <iostream>
using namespace std;

int main(){

	int a,b,x,y;

	cin >> a >> b >> x >> y;

	if((a <=x and b<=y) or (a<=y and b<=x))cout << "yes\n";
	else cout << "no\n";


}

