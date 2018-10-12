#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
using namespace std;


int main() {

	int in;
	string aspect;
	double edge;

	cin >> in;
	getline(cin, aspect);
	cin >> edge;

	string a("");
	string b("");
	bool l = true;
	for(int i = 0; i<aspect.size();++i){
		if(aspect[i] == ':')l = false;
		if(l){
			a+=aspect[i];
		}else{

			b+=aspect[i];
		}


	}
	reverse(a.begin(),a.end());
	reverse(b.begin(),b.end());

	cout << a << " " << b << endl;


}