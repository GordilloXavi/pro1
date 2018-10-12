#include <iostream>
#include <algorithm>
using namespace std;



int main(){

	int v[3];
	char c[3];
	cin >> v[0] >> v[1] >> v[2];

	sort(v,v+3);

	cin >> c[0] >> c[1] >> c[2];

	for(int i = 0; i<3; ++i){
		if(c[i] == 'A')cout << v[0];
		else if(c[i] == 'B')cout << v[1];
		else cout << v[2];
		if(i!=2)cout << " ";
	}cout << endl;




}