#include <iostream>
#include <vector>
using namespace std;

int vowels(string& s){

	int v = 0;

	for(char c : s)v+=(c== 'A' or c== 'E' or c== 'I' or c== 'O' or c== 'U');

	return v;



}


void LlegirParaules(vector<string>& cas, string& paraula) {
   while (paraula != "FI") {
      cas.push_back(paraula);
      cin >> paraula;
   }
   
   int sz = cas.size();
   if(sz>0){
   int vow = vowels(cas[sz-1]);

   int index = -1;

   for(int i = 0; i<sz-1; ++i){

   	if(vowels(cas[i]) == vow){
   		index = i;
   		break;
   	}

   }

   if(index != -1)cout << cas[index] << ", " << index << endl;
   else cout << "-\n";

	}else cout << "-\n";


}

int main() {



	string s;

	while(cin >> s){

	vector<string> v;
	

	LlegirParaules(v, s);
}

}