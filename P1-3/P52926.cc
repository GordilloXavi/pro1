#include <iostream>
using namespace std;

void printw(bool b = 1){

	string s;

	if(cin >> s){

	if(b and s != "end")printw(1);
	else printw(0);

	if(b and s != "end")cout << s << endl;

	}
	


}


int main(){

	printw();

}