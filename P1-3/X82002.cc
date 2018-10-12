#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct pers{

	int time;
	string name;
		


};

int main(){

	vector<pers> v;

	string n;

	int s1,s2;

	while(cin >> n and n != "#"){

		cin >> s1 >> s2;

		 pers p;

		 p.name = n;
		 p.time = s2-s1;

		 v.push_back(p);


	}

	vector<int> f;

	for(auto i : v){

		f.push_back(i.time);

	}
	sort(f.begin(),f.end());

	vector<pers> vect;

	for(int i : f){
		for(pers p : v){

			if(i == p.time)vect.push_back(p);

		}

	}

	

	for(pers p : vect){

		cout << p.name << " " << p.time << endl;

	}



}