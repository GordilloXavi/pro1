#include <iostream>
using namespace std;

bool isLeap(int year){
    
    bool l = false;
    
    int y = (year%100 == 0) ? year/100 : year;
    
    if(y%4 == 0)l = true;
    
    return l;
}

int main() {
    
    
    
    
    int day, month, year;
    
        while(cin >> day){
        
        cin >> month >> year;
        
        bool correct = true;
        
        if(day % 31 == 0){
            
         if(month == 1 or month == 3 or month == 5 or month == 7 or month == 8 or month == 10 or month == 12){
             correct = true;
         }else correct = false;
        }
        else if(day % 30 == 0){
            if(month != 2){
                correct = true;
                
            }else correct = false;
        }else if(day % 29 == 0 and month == 2){
            if(isLeap(year))correct = true;
            else correct = false;
            
        }
        
        if(day <= 0 or month <=0)correct = false;
        if(day > 31 or month > 12 or year < 1800 or year > 9999)correct = false;
        if(correct)cout << "Correct Date\n";
        else cout << "Incorrect Date\n";
    
        }
}