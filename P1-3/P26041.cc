#include <iostream>
using namespace std;

void printw(){

	string s;

	if(cin >> s){

	printw();

	cout << s << endl;

	}
	


}


int main(){

	printw();

}