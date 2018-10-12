#include <vector>
#include <iostream>
#include <algorithm>


struct pair{

	int f;
	std::string n;

};


void display(std::vector<std::string> p){

	int sz = p.size();



	//std::sort(p.begin(), p.end());

	for(auto g : p){
		std::cout << g << " ";

	}

	 std::cout << std::endl;

}

void display(std::vector<pair>& p){

	int sz = p.size();



	//std::sort(p.begin(), p.end());

	for(auto g : p){
		std::cout << g.n << "(" << g.f << ") ";

	}

	 std::cout << std::endl;

}



bool func(pair p1, pair p2){

	if(p1.f != p2.f) return (p1.f > p2.f);

	return (p1.n > p2.n);


}



void freq(std::vector<std::string>& v, int k){

	std::vector<pair> p;

	bool found = false;

	for(auto s : v){

		found = false;

		for(auto pair : p){

			if(pair.n == s){

				std::cout << pair.n << " found!(" << pair.f << ") -> ";

				pair.f = pair.f + 1;

				std::cout << pair.f << std::endl;

				found = true;

			}

		}

		if(not found){
			pair h;
			h.n = s;
			h.f = 1;

			p.push_back(h);

		}

	}//end for each

	//std::cout << "Here!!\n" << "P.size() = " << p.size() << std::endl;


	std::sort(p.begin(), p.end(), func);

	for(int i = 0; i<k; ++i){

		std::cout << p[i].n << std::endl;

	}

	std::cout << "----------\n";

	display(p);




}






int main() {

	int n,k;

	while(std::cin >> n >> k){

		std::string s;

		std::vector<std::string> v;

		for(int i = 0; i<n; ++i){



			std::cin >> s;

			v.push_back(s);

		}

		freq(v, k);

		//display(v);

	}



}