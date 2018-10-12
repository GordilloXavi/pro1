#include <iostream> 
#include <math.h> 

using namespace std;


int main() {
  cout.setf(ios::fixed);
  cout.precision(4);

  double i;
  int f;
  string p;

  cin >> i >> p;

  i /= 100;

if (p == "setmanal")f = 52;
else if (p == "mensual")f = 12;
else if (p == "trimestral") f = 4;
else f = 2;
  

  cout << (pow(1 + i / f, f) - 1) * 100 << '\n';

}