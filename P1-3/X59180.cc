#include <iostream>
#include <vector>
using namespace std;

int main() {

	int n;

	cin >> n;

	vector<int> v;
	for(int i = 2; i<n; ++i)v.push_back(i);		
	vector<int>luds = {1};
	int lud = 2;
	
	while(lud < n){
		
		luds.push_back(v[0]);
		v[0] = -1;
		for(int i = lud; i<v.size(); ++i){//solo funciona si no hay -1
			if(i%lud == 0)v[i] = -1;
		}

		for(int i = 0; i<v.size(); ++i){
			if(v[i] == -1){
				v.erase(v.begin()+i);
				i--;
			}

		}

		lud++;

	}

	for(int i = 0; i<luds.size()-1; ++i)cout << luds[i] << " ";
	cout << luds[luds.size()-1] << endl;


	//v.erase(v.begin()+2,v.end()-2);




}