#include<iostream>
#include<string>
using namespace std;

class Employee{
    private:
    string name;
    int idNumber;
    string department;
    string position;

    public:

    Employee(string n, int id, string dept, string pos){

        name = n;
        idNumber = id;
        department = dept;
        position = pos;
    }

    Employee(string n, int id){
        name = n;
        idNumber = id;
        department = " ";
        position = " ";
    }

    Employee(){
        name = " ";
        idNumber = 0;
        department = " ";
        position = " ";
    }

    void setName(string n){
        name = n;
    }
    void setidNumber(int id){
        idNumber = id;
    }
    void setDepartment(string dept){
        department = dept;
    }
    void setPosition(string pos){
        position = pos;
    }
    string getName(){
        return name;
    }
    int getidNumber(){
        return idNumber;
    }
    string getDepartment(){
        return department; 
    }
    string getPosition(){
        return position;
    }

    void displayinfo(){
        cout << "Name: " << name << endl;
        cout << "ID number: " << idNumber << endl;
        cout << "Department: " << department << endl;
        cout << "Position: " << position << endl;
    }
};

int main(){

    Employee Emp1("Susan Meyers", 47899, "Accounting", "Vice President");
    Employee Emp2("Mark Jones", 39119, "IT", "Programmer");
    Employee Emp3("Joy Rogers", 81774, "Manufacturing", "Engineer");
    Employee Emp4("Abdul Raffay", 70207);
    Employee Emp5;

    cout << "------------------" << endl;
    Emp1.displayinfo();
    cout << "------------------" << endl;
    Emp2.displayinfo();
    cout << "------------------" << endl;
    Emp3.displayinfo();
    cout << "------------------" << endl;
    Emp4.displayinfo();
    cout << "------------------" << endl;
    Emp5.displayinfo();

    return 0;
}