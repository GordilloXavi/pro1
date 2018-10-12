#include <iostream>

using namespace std;

int main(){

	

	int a1,b1,a2,b2;
	
	cin >> a1>>b1 >> a2>>b2;

	if(a1 == a2 and b1 == b2 ) cout << "= , [" << a1 << "," << b1 << "]" << endl;
	else if(a2 <= a1 and b1<= b2)cout << "1 , [" << a1 << "," << b1 << "]" << endl;
	else if(a1<=b1 and a2<=b2 and b1<a2 or a2<=b2 and a1<=b1 and b2<a1)cout << "? , []" << endl;
	else if(a1<=a2 and b2<=b1) cout << "2 , [" << a2 << "," << b2 << "]" << endl;
	else if(a1<a2 and b1<b2 and a2<=b1 )cout << "? , [" << a2 << "," << b1 << "]" << endl;

	else cout << "? , [" << a1 << "," << b2 << "]" << endl;
	
}
