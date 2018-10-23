#include <iostream>
 
using namespace std;
 
string dia_de_la_setmana(int d, int m, int a) {
    m = m - 2;
    if (m <= 0) {
        m = m + 12;
        --a;
    }
    int c = a/100;
    int y = a%100;
    int f = (2.6*m - 0.2);
    f = f + d + y - 2*c;
    y = y/4;
    c = c/4;
    f = f + c + y;
    while (f < 0) f += 7;
    f = f%7;
    if (f == 0) return "Sunday";
    if (f == 1) return "Monday";
    if (f == 2) return "Tuesday";
    if (f == 3) return "Wednesday";
    if (f == 4) return "Thursday";
    if (f == 5) return "Friday";
    else return "Saturday";
}
 
int main() {
    int d,m,a;
    cin >> d >> m >> a;
    cout << dia_de_la_setmana(d,m,a) << endl;
}
