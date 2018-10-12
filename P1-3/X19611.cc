#include <iostream>
#include <climits>
using namespace std;


int main(){
	int n;
	int a,b,c;
	while(cin >> n){
	bool st = true;
	bool saw = true;
	int last = INT_MAX;
	while(cin >> a and a != 0){
		cin >> b;
		if(b == 0)break;
		if(st){
			
			c = b;
			b = a;
			a = n;
			st = false;
		}else{
		
		cin >> c;
		if(c == 0)break;
		}
		if(a < last and b > a and c > b)last = c;
		else saw = false;


	}

	cout << (saw ? "saw\n" : "not saw\n");
}
} 
