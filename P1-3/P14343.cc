#include <iostream>
#include <vector>
using namespace std;


struct Submission{

	string idn;
	string exer;
	int time;
	string res;

};

typedef vector<Submission> History;

struct Green{

	string name;
	int Ngreens;
};




void printGreen(History& h){//Green submissions!!!

	vector<Green> greens;

	for(auto s : h){

		bool found = false;

		if(s.res == "green"){
			for(auto g :greens){

			if(s.idn == g.name){
				g.Ngreens += 1; 
				found = true;
			}

		}
		if(not found){
			Green g;
			g.name = s.idn;
			g.Ngreens = 1;
			greens.push_back(g);
		}


	}

	}

	int max = 0;
	int index= 0;

	if(greens.size() > 0){

		for(int i = 0; i<greens.size(); ++i){

			if(greens[i].Ngreens > max){
				index = i; 
				max = greens[i].Ngreens;
			}

		}

		cout << "student with more green submissions: " 
		<< greens[index].name << " (" << max << ")\n";

	}else cout << "-\n";
}



void display(History& h){



	for(auto i : h){

		cout << i.idn << " " << i.exer << " " << i.time << " " << i.res << endl;

	}

}




int main() {

	int n;

	cin >> n;

	History h(n);

	for(int i = 0; i<n; ++i){

		cin >> h[i].idn;
		cin >> h[i].exer;
		cin >> h[i].time;
		cin >> h[i].res;




	}

	//display(h);

	printGreen(h);

}


/*

void printGreen(History& h){//Green submissions!!!

	vector<Green> greens;

	bool found = 0;

	for(auto s : h){

		found = 0;

		for(auto g : greens){

			if(g.name == s.idn and s.res == "green"){g.Ngreens++;
			found = true;
			}
		}
		if(not found){

			Green g;

			g.name = s.idn;
			g.Ngreens = (s.res == "green");

			greens.push_back(g);

		}

	}

	int index = -1;

	int max = 0;

	for(int i = 0; i<greens.size(); ++i){

		if(greens[i].Ngreens > max){

			index = i;
			max = greens[i].Ngreens;

		}

	}

	if(index != -1)cout << "student with more green submissions: " << greens[index].name << "(" << max << ")\n";
	else cout << "-\n";


}

*/


