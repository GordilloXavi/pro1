#include <iostream>
#include <vector>
using namespace std;

int main(){

    int n;

    cin >> n;

    vector<int> peaks;
    vector<int> m(n);

    for(int i =0; i<n; ++i)cin >> m[i];


    for(int i = 1; i<n-1; ++i){



        if(m[i] > m[i-1] and m[i] > m[i+1]){
            
            peaks.push_back(m[i]);



            }

    }


    cout << peaks.size() << ":";

    for(int i = 0; i<peaks.size(); ++i)cout << " " << peaks[i];
    cout << endl;



    bool p = 1;

    if(peaks.size()>0)for(int i = 0; i<peaks.size()-1; ++i){

        if(peaks[i]>peaks[peaks.size()-1]){

            cout << (p ? "" : " ")<< peaks[i];

            p = 0;

        }



    }



    if(p)cout << '-';

    cout << endl;


}
