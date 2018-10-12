#include <iostream>
using namespace std;

int main(){
	
	double n;

	cin >> n;
	double m;
	double s1 = 0;
	double s2 = 0;

	for(int i = 1; i<=n; ++i){
		cin >> m;

		s1+= m*m;
		s2+= m;

	}


	double res = ((1/(n-1))*s1)-((s2*s2)/(n*(n-1)));

	double m1 = ((1/(n-1))*s1);
	double m2 = ((s2*s2)/(n*(n-1)));
	cout.setf(ios::fixed);
    cout.precision(2);
    cout << res << endl;

}