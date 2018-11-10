#include <vector>
#include <iostream>
using namespace std;

char most_frequent_letter(const string& s){

    int n = s.size();
    int iMax = 1;
    char cMax = s[0];

    for(int i = 0; i<n; ++i){

        int count = 1;

        for(int j = 0; j<n; ++j){

            count+=(i!=j and s[j] == s[i]);

        } 

        if(count > iMax){
            
            iMax = count;

            cMax = s[i];


        }

        else if(count == iMax and cMax > s[i])cMax = s[i];
        

    } 

    return cMax;

} 

int main(){

    int n;

    cin >> n;

    vector<string> words(n);

    double avg = 0;

    for(int i = 0; i<n; ++i){

        cin >> words[i];

        avg+= words[i].size();

    } 

    avg /= n;

    cout.setf(ios::fixed);

    cout.precision(2);

    cout << avg << endl;

   for(string s : words){
    
        if(s.size() >= avg){

            cout << s << ": " << most_frequent_letter(s) << endl;


        } 

   } 


} 
