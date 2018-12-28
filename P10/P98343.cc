#include <vector>
#include <iostream>
using namespace std;

void print_num(int n){

    if(n == 0)cout << "zero";
    else if(n == 1)cout << "un";
    else if(n == 2)cout << "dos";
    else if(n == 3)cout << "tres";
    else if(n == 4)cout << "quatre";
    else if(n == 5)cout << "cinc";
    else if(n == 6)cout << "sis";
    else if(n == 7)cout << "set";
    else if(n == 8)cout << "vuit";
    else if(n==9)cout << "nou";

} 

void print_desenes(int n){ //0 <= n < 100

    if(n/10 == 0 and n%10 != 0){
        print_num(n);
    } 
    else if(n/10 == 1){
        if(n%10 == 0)cout << "deu";
        if(n%10 == 1)cout << "onze";
        if(n%10 == 2)cout << "dotze";
        if(n%10 == 3)cout << "tretze";
        if(n%10 == 4)cout << "catorze";
        if(n%10 == 5)cout << "quinze";
        if(n%10 == 6)cout << "setze";
        if(n%10 == 7)cout << "disset";
        if(n%10 == 8)cout << "divuit";
        if(n%10 == 9)cout << "dinou";
    }else if(n/10 == 2){
        cout << "vint";
        if(n%10 != 0){
            cout << "-i-";
            print_num(n%10);
        } 
    }  
    else if(n/10 == 3){
        cout << "trenta";
        if(n%10 != 0){
            cout << '-';
            print_num(n%10);
        } 
    }  

    else if(n/10 == 4){
        cout << "quaranta";
        if(n%10 != 0){
            cout << '-';
            print_num(n%10);
        } 
    }  
    else if(n/10 == 5){
        cout << "cinquanta";
        if(n%10 != 0){
            cout << "-";
            print_num(n%10);
        } 
    }  
    else if(n/10 == 6){
        cout << "seixanta";
        if(n%10 != 0){
            cout << "-";
            print_num(n%10);
        } 
    }  
    else if(n/10 == 7){
        cout << "setanta";
        if(n%10 != 0){
            cout << "-";
            print_num(n%10);
        } 
    }  
    else if(n/10 == 8){
        cout << "vuitanta";
        if(n%10 != 0){
            cout << "-";
            print_num(n%10);
        } 
    }  
    else if(n/10 == 9){
        cout << "noranta";
        if(n%10 != 0){
            cout << "-";
            print_num(n%10);
        } 
    }  
} 

void toLetters(int n){

    int x1, x2;
    x1 = (n-(n%1000000))/1000000;
    x2 = n%1000000;

    //cout << x1 << " : " << x2 << endl; // debug


    //FIRST HALF
    if(x1!= 0)cout << ' ';

    if(x1>999){
        
        if(x1/1000 > 1){
            print_num(x1/1000);
        } cout << "mil";
    } 

    if(x1%1000 > 99){
        if(x1%1000 < 200)cout << "cent";
        else {
            print_num(x1%1000/100);
            cout << "-cents";
        } 
        cout << ' ';
    } 

    if(x1%100 > 0){
        print_desenes(x1%100);
    } 

    if(x1>0){
    cout << " milio";
    if(x1 > 1)cout << "ns"; 
    if(x2 != 0)cout << ' ';
    }
    ////SECOND HALF
    
    if(n == 0)cout << "zero";

    else{

        if(x2/100000 != 0){
            if(x2/100000 == 1)cout << "cent";
            else {
                print_num(x2/100000);
                cout << "-cents";
            }  
            cout << ' ';
        } 
        print_desenes(x2%100000/1000);
        if(x2%100000/1000 != 0)cout << ' ';

        if(x2/1000 > 0)cout << "mil";

        if(x2/100 != 0){
            if(x2/100 == 1)cout << " cent";
            else {
                cout << ' ';
                print_num(x2%1000/100);
                cout << "-cents";
            }  
        } 
        if(x2%100 != 0)cout << ' ';
        print_desenes(x2%100);
        
    } 

} 



int main() {

    int n;
    while(cin >> n){

        cout << n << ":";
        toLetters(n);
        cout << '.' << endl;
    } 


} 
