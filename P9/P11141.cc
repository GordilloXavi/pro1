#include<iostream>
#include <vector>
using namespace std;

struct Student {
     int idn;
     string name;
     double mark;        // The mark is a value between 0 and 10, or -1 that represents NP
     bool repeater;
 };

void information(const vector<Student>& stu, double& min, double& max, double& avg){

    min = 10;
    max = -1;
    int count = 0;
    avg = 0;

    int size = stu.size();

    for(int i = 0; i<size; ++i){

        if(not stu[i].repeater and stu[i].mark != -1){

            if(stu[i].mark < min)min = stu[i].mark;
            if(stu[i].mark > max)max = stu[i].mark;
            avg += stu[i].mark;
            count++;

        } 

    } 
    if(count == 0){
        avg = min = max = -1;
    } 
    else avg /= count;

} 
