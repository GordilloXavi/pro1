#include <iostream>
#include <vector>
using namespace std;

struct student{
    string idn;
    vector<string> done;
    vector<string> total;
} ;

struct Submission {
 string idn;
string exer;
int time;
string res;
};

struct Pair {
    string idn;
    int greens;
};

struct Prob{

    string idn;
    int greens;
    vector<string> problems;

};


typedef vector<Submission> History;


void moreGreenS(History& s){

    vector<Pair> pairs;
    int sz = s.size();
    
    for(int i = 0; i<sz; ++i){
        bool found = not(s[i].res == "green");
        for(int j = 0; j<(int)pairs.size() and not found ; ++j){
            if(pairs[j].idn == s[i].idn){
                found = true;
                pairs[j].greens++;
            } 
         }
       if(not found){
           Pair p;
           p.idn = s[i].idn;
           p.greens = 1;
           pairs.push_back(p);
       } 


    } 
    int max = 0;
    if((int)pairs.size()>0)for(int i = 0; i<(int)pairs.size(); ++i){
        if(pairs[i].greens == pairs[max].greens and pairs[i].idn < pairs[max].idn)max = i; 
        if(pairs[i].greens > pairs[max].greens)max = i;

    } 
    if(pairs.size() == 0)cout <<"student with more green submissions:       -" << endl;
    else cout << "student with more green submissions:       "<< pairs[max].idn << " (" << pairs[max].greens << ")\n";

} 

vector<Prob> moreGreenE(History& s){

    vector<Prob> probs;

    for(int i = 0; i<(int)s.size(); ++i){

        if(s[i].res == "green"){
            
            bool found = false;
            for(int j = 0; j<(int)probs.size() and not found; ++j){
                if(s[i].idn == probs[j].idn){
                    found = true;
                    bool Agreen = false;
                    for(int k = 0; k<(int)probs[j].problems.size() and not Agreen; ++k){

                        if(probs[j].problems[k] == s[i].exer)Agreen = true;

                    } 
                    if(not Agreen){
                        probs[j].greens++;
                        probs[j].problems.push_back(s[i].exer);
                    } 
                } 
            } 

    if(not found){
        Prob p;
        p.idn = s[i].idn;
        p.greens = 1;
        vector<string> p2(1,s[i].exer);
        p.problems = p2;
        probs.push_back(p);
    }         

        } 
    } 

    int m = 0;
    for(int i = 0; i<(int)probs.size(); ++i){

        if(probs[i].greens == probs[m].greens and probs[i].idn<probs[m].idn)m = i; 
        if(probs[i].greens > probs[m].greens)m = i;
    } 

    if(probs.size()>0)cout << "student with more green exercises:         " << probs[m].idn << " (" << probs[m].greens << ")\n";
    else cout << "student with more green exercises:         -\n"; 
    return probs;
} 


void moreRed(History& s){

    


} 


void moreTried(History& s){

    int sz = s.size();
    vector<Prob> probs;


    for(int i = 0; i<sz; ++i){

        int found = false;
        for(int j = 0; j<(int)probs.size() and not found; ++j){

            if(probs[j].idn == s[i].idn){
                found = true;
                bool done =false;
                for(int k = 0; k<(int)probs[j].problems.size() and not done; ++k){
                    done = probs[j].problems[k] == s[i].exer;
                } 
                if(not done){
                    probs[j].problems.push_back(s[i].exer);
                } 
            } 
      } 
            if(not found){
                Prob p;
                p.idn = s[i].idn;
                p.greens = 0;
                vector<string> v(1,s[i].exer);
                p.problems = v;
                probs.push_back(p);
        } 
    } 
    
    int max = 0;
    if(probs.size()>0)for(int i = 0; i<(int)probs.size(); ++i){
        if(probs[i].problems.size() ==probs[max].problems.size() and probs[i].idn < probs[max].idn)max = i; 
        if(probs[i].problems.size() >probs[max].problems.size())max = i;

    } 
    if(probs.size() == 0)cout <<"student with more tried exercises:         -" << endl;
    else cout << "student with more tried exercises:         "<< probs[max].idn << " (" <<probs[max].problems.size() << ")\n";


} 

void lastStudent(History& s){

    int max = 0;
    for(int i = 0; i<(int)s.size(); ++i){
        if(s[i].time > s[max].time)max = i; 
    } 
    cout << "student who has done the last submission:  ";
    if(s.size() > 0)cout << s[max].idn << endl;
    else cout << '-' << endl;

} 


int main(){

    int n;
    cin >> n;
    History submissions(n);
    for(int i = 0; i<n; ++i)cin >> submissions[i].idn >> submissions[i].exer >> submissions[i].time >> submissions[i].res;
    
    moreGreenS(submissions);
    vector<Prob> vp = moreGreenE(submissions);
    moreRed(submissions, vp);
    moreTried(submissions);
    lastStudent(submissions);


} 
