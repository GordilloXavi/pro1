#include <iostream>
using namespace std;

/// return sum of digits
int sum_digits(int x) {
    int s = 0;
    while (x > 0) {
        s = s + x%10;
        x = x/10;
    }
    return s;
}

int main() {
	
	int n;
	int num = 0;
	int small = -1;//Improve

	while(cin >> n){

		int sum = sum_digits(n);

		if(sum < small or small == -1){
			
			small = sum;

			num = n;

		}

	}	
	
	cout << num << " " << small << endl;

}
