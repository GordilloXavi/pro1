#include <iostream>
using namespace std;

int main(){

	int a,b;
	bool g = true;
	
	int tot = 0;

	while(cin >> a and a != -1){
		cin >> b;
		
		if(g){
		int d = a-b;
		tot += d;
		if(d>0)cout << "The Niffler is escaping. +" << d << endl;
		else if(d<0)cout << "Newt is getting closer to the Niffler. " << d << endl;
		else cout << "Newt is keeping the distance with the Niffler\n";
		if(tot == 0){
			cout << "Newt catches the Niffler\n";
			g = false;
		}
}
	}
	if(tot != 0)cout << "The Niffler has escaped\n";


}