#include <iostream>
using namespace std;

void admin(int& h, int& m, int interval){

	m+=1;

	if(m >= 60){
		h++;
		m = 0;

		if(h >= 24){
			h = 0;
		}
	}

}


int times(int h, int m, int interval){

	int t = 0;

	for(int i = 0; i < interval; ++i){

		admin(h,m,1);

		if(m == 1 and h != 12 and h != 0)t+= h%12;
		else if(m == 1 and h == 0)t+= 12;
		else if(m == 1 and h == 12)t+=100;


		
		if(m%15 == 1){
			
			t+= (m==1) ? 4 : m/15;
		}

	}


	return t;
}

int main() {

	int h, m, interval;

	
	while(cin >> h >> m >> interval){

		cout << times(h,m,interval) << endl;


	}









}