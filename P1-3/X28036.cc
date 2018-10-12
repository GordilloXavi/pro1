#include <iostream>
#include <vector>
using namespace std;

struct Interval {
    int start;
    int end;
};

struct Movie {
    string name;
    Interval inter;
    double score;
};

void read_movies(vector<Movie> &v) {
    for (int i = 0 ; i < v.size(); ++i) {
         cin >> v[i].name >> v[i].inter.start >> v[i].inter.end >> v[i].score;
    }
}

void print_movies (const vector<Movie>& p, Interval time, double sc) {
   
	for(Movie m : p){

		if(m.score >= sc and m.inter.start >= time.start and m.inter.end <= time.end){
			int dur = m.inter.end - m.inter.start;
			cout << m.name << " " << dur << endl;

		}
	}cout << "---\n";



}

int main() {
    int n; 
    cin >> n;
    vector<Movie> v(n);
    read_movies(v);

    int m;
    cin >> m;

    Interval in;
    
    double score;

    for (int i = 0; i < m; ++i) {

    	cin >> in.start >> in.end >> score;

        print_movies(v, in, score);

    }
}