#include <iostream>
using namespace std;

int main() {

	int r,w,b;
	string s;
	bool t = true;//true for white
	cin >> r;
	
	w = b = 0;

	for(int i = 0; i<r; ++i){
		cin >> s;

		for(int j = 0; j<r; j++){

			if(t)w+= int(s[j]-'0');
			else b+= int(s[j]-'0');
		t = !t;
		}if(r%2==0)t = !t;

	}

	printf("%d-%d = %d\n", w, b, w-b);

}