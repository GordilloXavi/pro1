#include <iostream>
using namespace std;

struct Time {
         int hour, minute, second;
};

void one_second(const Time& t, Time& t1, Time& t2){

    t1 = t2 = t;
    t1.second++;
    if(t1.second == 60){
        t1.second = 0; 
        t1.minute++;
        if(t1.minute == 60){
            t1.minute = 0;
            t1.hour++;
        } 
    } 
    t2.second--;
    if(t2.second < 0){
        t2.second = 59;
        t2.minute--;
        if(t2.minute < 0){
            t2.minute = 59;
            t2.hour--;
            if(t2.hour <0)t2.hour = 23;
        } 
    } 

    t1.hour %= 24;
} 

int main() {

    Time t;
    while(cin >> t.hour >> t.minute >> t.second){

        Time t1,t2;

        one_second(t,t1,t2);

        cout << t1.hour << ' ' << t1.minute << ' ' << t1.second << endl << t2.hour << ' ' << t2.minute << ' ' << t2.second << endl;

    } 

} 
