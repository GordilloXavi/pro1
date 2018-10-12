#include <iostream>

using namespace std;

int main(){	int y, d, h, m, s;	cin >> y >> d >> h >> m >> s;int t =  (y*365*3600*24) + (d*3600*24) + (h*3600) + (m*60) + s;	cout << t << endl;}