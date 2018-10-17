#include <iostream>
using namespace std;

void list(int n){

	string s;

	cin >> s;

	list(n-1);

	if(n>0)cout << s << endl;

	

}


int main(){

	int n;

	cin >> n;

	list(n);


}
