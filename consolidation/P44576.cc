#include <iostream>
#include <vector>
using namespace std;

struct Student {
     int idn;
     string name;
 };


 struct Mark {
     int idn;
     string subj;     // subject
     string sch;     // school
     double mark;
 };


 void read_students(vector<Student>& students) {
     int m;
     cin >> m;
     students = vector<Student>(m);
     for (int i = 0; i < m; ++i) cin >> students[i].idn >> students[i].name;
 }


 void read_marks(vector<Mark>& marks) {
     int n;
     cin >> n;
     marks = vector<Mark>(n);
     for (int i = 0; i < n; ++i) {
         cin >> marks[i].idn >> marks[i].subj >> marks[i].sch >> marks[i].mark;
     }
 }

int search_idn(const vector<Mark>& marks, int idn){

    int l = 0, r = marks.size()-1;
    int m = (l+r)/2;

    while(l<r){
        if(m >= 0 and marks[m].idn < idn){
            l = m+1;
            m = (l+r)/2;
        }
        else if( m >= 0 and marks[m].idn > idn){
            r = m-1;
            m = (l+r)/2;
        } 
        else{
            while(m > 0 and marks[m-1].idn == marks[m].idn){
                m--;
            } return m;
        } 
    } 
    if(m >= 0 and marks[m].idn == idn){
        while(m > 0 and marks[m-1].idn == marks[m].idn){
            m--;
        } return m;
    } 
    return marks.size();
} 

void print_students(const vector<Student>& students, const vector<Mark>& marks){

    int num_stu = students.size();
    int num_mark = marks.size();

    for(int i = 0; i<num_stu; ++i){

        double avg = 0.0;
        int n_marks = 0;

       //the idns are sorted
        
       int j = search_idn(marks, students[i].idn);
       bool first = true;
       while(j<num_mark and marks[j].idn == students[i].idn){
        
           if(first)cout << students[i].idn << ' ' << students[i].name << endl;
           first = false;
           cout << "     " << marks[j].subj << ' ' << marks[j].sch << ' ' << marks[j].mark << endl;
           n_marks++;
           avg+= marks[j].mark;
           j++;
       } 
        if(n_marks > 0){
            avg /= n_marks;
            cout << "     average: " << avg << "\n\n";
        }  
    } 

} 


 int main() {
     cout.setf(ios::fixed);      //Set the the format of doubles
     cout.precision(2);          // to write the marks

     vector<Student> students;
     vector<Mark> marks;
     read_students(students);
     read_marks(marks);

    if(marks.size() > 0)print_students(students, marks);

 }
