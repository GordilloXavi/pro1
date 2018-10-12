#include <iostream>
using namespace std;

void write_digit(int d,int x) {
    for(int i = 0; i<x; ++i)cout<< d;
}

void write_expanded(int n) {
    
    string s = to_string(n);

    for(char c : s){
    	int n = c - '0';
    	write_digit(n,n+1);
    }
}

int main() {
    int n;
    while (cin >> n) {
        write_expanded(n);
        cout << endl;
    }
}
