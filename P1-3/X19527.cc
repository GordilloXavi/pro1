#include <iostream>
using namespace std;


int main() {

	int a, b, c, d;

	cin >> a >> b >> c >> d;

	if((a%2==0 and c % 2 == 0 and b %2 == 1 and d % 2 ==1)or(a % 2 == 1 and c%2 == 1 and b % 2 == 0 and d % 2 == 0)){
		cout << "LBA\n";
	}
	if(a<b and b<c and c<d){
		cout << "Increasing\n";
	}
	if(a>b and b>c and c>d){
		cout << "Decreasing\n";
	}
	if(a == c and b == d){
		cout << "Folded\n";
	}


}