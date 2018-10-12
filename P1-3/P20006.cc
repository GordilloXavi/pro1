#include <iostream>
using namespace std;

int expression(char c){

	if(c >= '0' and c <= '9'){
		return int(c - '0');
	}
	else if(c == '+'){

		char a,b;

		cin >> a;

		int exa = expression(a);

		cin >> b;

		int exb = expression(b);


		return exa + exb;

	}
	else if(c == '-'){

		char a,b;

		cin >> a;

		int exa = expression(a);

		cin >> b;

		int exb = expression(b);


		return exa - exb;

	}
	else if(c == '*'){

		char a,b;

		cin >> a;

		int exa = expression(a);

		cin >> b;

		int exb = expression(b);


		return exa * exb;

	}else return -1;


}

int main(){

	char n;

	while(cin >> n)cout << expression(n) << endl;


}

