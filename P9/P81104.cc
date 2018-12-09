#include <vector>
#include <iostream>
using namespace std;

struct Subject{
    string name;
    double mark;
} ;

struct Student{
    string name;
    int idn;
    vector<Subject> subj;
} ;

double mark(const vector<Student>& stu, int idn, string name){

    int sz = stu.size();

    for(int i = 0; i<sz; ++i){

        if(stu[i].idn == idn){
            for(int j = 0; j<(int)stu[i].subj.size(); ++j){
                if(stu[i].subj[j].name == name)return stu[i].subj[j].mark < 0 ? -1 : stu[i].subj[j].mark;
            } 
        } 

    } return -1;

} 

double mean(const vector<Subject>& subj){

    double avg = 0.0;
    int count = 0;
    int sz = subj.size();

    for(int i = 0; i<sz; ++i){

        if(subj[i].mark >= 0){
             avg+=subj[i].mark;
             count++;
        }

    } 
    if(count == 0)return -1;
    return avg/(count);
} 

void count(const vector<Student>& stu, int idn, string name, int& counter){

    counter = 0;
    double m = mark(stu, idn, name);
    int sz = stu.size();
    for(int i = 0; i<sz; ++i){
        if(mean(stu[i].subj) > m)counter++;
    } 



} 


int main() {

    int n;
    cin >> n;
    vector<Student> students(n);
    for(int i = 0; i<n; ++i){

      int x;

      cin >> students[i].name >> students[i].idn >> x;
        vector<Subject> sub(x);
        for(int j = 0; j<x; ++j)cin >> sub[j].name >> sub[j].mark;

        students[i].subj = sub;

    } 
    string subject;
    while(cin >> n >> subject){
        int c;
        count(students, n, subject, c);
        cout << c << endl;
    } 


} 




