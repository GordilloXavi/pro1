#include <iostream>
#include <vector>
using namespace std;

const int PICA = 3143;

int main(){
	
	vector<int> v;

	int n;

	bool pica = false;

	while(cin >> n and n != 0)v.push_back(n);

	for(int i = 0; i< v.size(); ++i){

		if(v[i] > PICA and i > 0 and i < v.size()-1){

			if(v[i-1] < v[i] and v[i] > v[i+1])pica = true;

		}

	}	

	if(pica)cout << "YES\n";
	else cout << "NO\n";


}
