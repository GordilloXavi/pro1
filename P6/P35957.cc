#include <iostream>
using namespace std;

int digits(int n){

    if(n < 10)return 1;

    return 1+ digits(n/10);

} 

int middle(int n){

    int d = digits(n);

    if(d%2 == 0)return -1;

    for(int i = 0; i< d/2; ++i)n/= 10;

    return n%10;

} 



int main(){

    int n, x, newM;

    cin >> n;

    char winner = '=';

    cin >> x;

    int mid = middle(x);

    if(mid == -1){

        winner = 'B';

        n = 0;
    } 

    for(int i = 0; i<n*2 -1 ; ++i){

        //cout << i << endl;

        cin >> x;
        
        newM = middle(x);

        if(newM != mid or newM == -1){
            
           if(i%2 == 1)winner = 'B';

            else winner = 'A';

            break;

        } 
        
        mid = newM;
        

    } 

    cout << winner << endl;


} 
