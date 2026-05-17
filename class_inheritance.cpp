#include<iostream>
#include<string>
using namespace std;

int main(){
    string name;
    int age,result;
    double marks[3];
    double average;

    cout << "Enter your name: ";
    getline(cin,name);
    cout << "Enter your Age: ";
    cin >> age;
    cout << "Enter three marks: ";
    for(int i=0; i<3; i++){
        cin >> marks[i];
    }
    average = (marks[0] + marks[1] + marks[3]) / 3;
    result  = marks[0] + marks[1] + marks[3];
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Marks of three subjects: ";
    for(int i=0; i<3; i++){
        cout << marks[i] << endl;
    }
    cout << "Average of three marks: " << average << endl;
    cout << "Result: " << result << endl;

    return 0;
}

