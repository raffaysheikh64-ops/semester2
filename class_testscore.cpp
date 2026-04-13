#include<iostream>
#include<string>
using namespace std;

class TestScore{
    private:
        double score1, score2, score3;
    
    public:

    TestScore(double s1, double s2, double s3){
        score1 = s1;
        score2 = s2;
        score3 = s3;
    }
    TestScore(){
        score1 = 0;
        score2 = 0;
        score3 = 0;
    }
    void setScore1(int sc1){
        score1 = sc1;
    }
    void setScore2(int sc2){
        score2 = sc2;
    }
    void setScore3(int sc3){
        score3 = sc3;
    }

    int getScore1(){
        return score1;
    }
    int getScore2(){
        return score2;
    }
    int getScore3(){
        return score3;
    }

    double getAverage(){
        return (score1 + score2 + score3) / 3.0;
    }
};  

int main(){

    double s1, s2, s3;
    cout << "Enter score 1: ";
    cin >> s1;
    cout << "Enter score 2: ";
    cin >> s2;
    cout << "Enter score 3: ";
    cin >> s3;

    TestScore student(s1, s2, s3);
    cout << "\n--------------------------" << endl;
    cout << "Score 1:  " << student.getScore1()   << endl;
    cout << "Score 2:  " << student.getScore2()   << endl;
    cout << "Score 3:  " << student.getScore3()   << endl;
    cout << "Average:  " << student.getAverage()  << endl;
    cout << "--------------------------" << endl;

    return 0;
}