#include <iostream>

using namespace std;

int main(){

	double prix, note;
	cin >> prix >> note;
	double n;

	double change = note - prix;

	double tot = 0;

	while(cin >>n and n != 0)tot += n;
	

	if(change == tot)cout << "Right\n";
	else cout << "Wrong\n";


}