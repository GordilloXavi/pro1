#include <iostream>
using namespace std;


string day_of_the_week (int d, int m, int y){

	m-=2;

	if(m<=0){

		m+=12;
		y--;

	}

	m = (m<0 ? -m : m); // remove

	
	
	int c = y/100; 

	int a = y%100;

	int f = (2.6*m - 0.2) + d + a + a/4 + c/4 - 2*c; //might want to make double

	int day = f%7;

	day*= (day<0 ? -1 : 1);

	if(day == 7)return "Saturday";
	if(day == 1)return "Monday";
	if(day == 2)return "Tuesday";
	if(day == 3)return "Wednesday";
	if(day == 4)return "Thursday";
	if(day == 5)return "Firday";
	return "Sunday";

}

int main(){

	int a,b,c;

	while(cin >> a >> b >> c)cout << day_of_the_week(a,b,c) << endl;
		

}
//3 1 5046
