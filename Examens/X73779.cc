#include <iostream>
using namespace std;


int main() {

	string player1, player2;

	char a, b;

	int p1, p2, ties, total;

	p1 = p2 = ties = total = 0;

	cin >> player1 >> player2;

	while(cin >> a >> b){

		total ++;

		if(a == b)ties++;
		else if(a == 'P' and b == 'R' or a == 'R' and b == 'T' or a == 'T' and b == 'P')p1++;
		else p2++;

	}

	cout << player1 << " " << p1 << endl;

	cout << player2 << " " << p2 << endl;

	cout << "Ties " << ties << endl;

	cout << "Total " << total << endl;
}
