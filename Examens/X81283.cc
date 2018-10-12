#include <iostream>
#include <string>
using namespace std;

// definition of logic_gate goes here

void logic_gate(char c, bool& x, bool& y){

	char xo = x, yo = y;


	if(c == 'T'){
	
		x = (xo and yo);

		y = (xo or yo);

	}else{
	
		x = (xo or yo);

		y = (xo and yo);

	}

}


int main() {
    string a, b;
    char c;
    while (cin >> c >> a >> b) {
        bool x = (a == "true");
        bool y = (b == "true");
        logic_gate(c, x, y);
        // with flag "boolalpha", the values of the booleans
        // are printed "true" or "false" instead of 1 or 0 
        cout << boolalpha << x << ' ' << y << endl;
    }
}


