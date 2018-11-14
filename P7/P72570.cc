#include <iostream>
using namespace std;



void llegeix_hora(int& h, int& m, int& s){

        h = m = s = 0;

            char c;

                cin >> c;

                    while(cin >> c and c != '|'){

                                h*=2;        

                            h += (c == '*');
                    }
                        while(cin >> c and c != '|'){

                                    m*=2;        
                                            
                            m += (c == '*');
                        }
                            while(cin >> c and c != '|'){

                                        s*=2;        

                            s += c == '*';

                        
} 

}
void escriu_hora(int h, int m, int s){


        cout << h << ":" << m << ":" << s << "\n";

} 



int main(){


        int n;

        cin >> n;

        int h,m,s;

        for(int i =0; i<n; ++i){

            llegeix_hora(h,m,s);

            escriu_hora(h,m,s);


        } 



} 
