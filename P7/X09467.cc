#include <iostream>
#include <vector>
using namespace std;

vector<bool> ramps_pos(const vector <int>& V){

    int n = V.size();
    
    vector<bool> R(n);

    R[n-1] = R[n-2] = 0;

    for(int i = 0; i<n-2; ++i){

        if((V[i] > V[i+1] and V[i] > V[i+2]) or( V[i] < V[i+1] and V[i] < V[i+2]))R[i] = 1;

        else R[i] = 0;



    }

    return R;


}

int pot_conflictive(const vector <bool>& B){

    int p = 0;
    int n = B.size();

    for(int i = 0; i<n-2; ++i){

        if(B[i] and B[i+1])p++;
        if(B[i] and B[i+2])p++;


    }

    return p;


}

int main(){

    int n;

    while(cin >> n){

        vector<int> V(n);

        for(int i = 0; i<n; ++i)cin >> V[i];

        vector<bool> b = ramps_pos(V);

        cout << "positions with a ramp:";

        for(int i = 0; i<n; ++i){

            if(b[i])cout << " " << i;

        }
        cout << endl;

        cout << "potentially conflictive: " << pot_conflictive(b) << "\n---\n";

    }

}
