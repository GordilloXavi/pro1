#include <iostream> 
#include <string>
using namespace std;

int main(){

	int h,m,s;

	cin >> h >> m >>s;

	if(s<59) s++;
	else{
		s = 0;
		
		if(m<59) m++;
		else{
			
			m =0;
			if(h== 23)h=0;
			else h++;
			
		}
		
	}
	
	string hou = to_string(h), min= to_string(m), sec= to_string(s);
	
	if(h< 10) hou = "0" + hou;
	if(m< 10) min = "0" + min;
	if(s< 10) sec = "0" + sec;

	
	
	cout << hou << ":" << min << ":" << sec << endl;

}