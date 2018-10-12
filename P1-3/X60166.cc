#include <iostream>
#include <vector>
int main(){

	int n;

	std::string s;

	std::cin >> n >> s;

	std::vector<std::string> pl = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
	std::vector<int> y = {88,225,365,687,4333,10759,30689,60182};

	int in;

	for(int i = 0; i< y.size(); ++i)if(s == pl[i])in = i;

	std::cout << (y[in]*n/365) << "\n";

}