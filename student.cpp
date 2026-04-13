#include<iostream>
#include<string>
#include<fstream>
using namespace std;

class student{
    private:
    string name;
    int rollnumber;
    double marks;
    
    public:
    void input(){
        cout << "Enter name: ";
        getline(cin , name);
        cin.ignore();
        cout << "Enter roll number: ";
        cin >> rollnumber;
        cout << "Enter marks: ";
        cin >> marks;
        cin.ignore();
    }

    void display(){
        cout << "Name: " << name << endl;
        cout << "Roll number: " << rollnumber << endl;
        cout << "Marks:  " << marks << endl;
    }

    void saveinfile(){

        fstream file("studentdata.txt" , ios::app);
        if(!file){
            cout << "Error creating file" << endl;
        }
        else{
            file << "Name: " << name << endl;
            file << "Roll number: " << rollnumber << endl;
            file << "Marks: " << marks << endl;
            file.close();
        }
    }

    void readfromfile(){
        ifstream readfile("studentdata.txt");
        if(!readfile){
            cout << "Error opening file!!";
        }
        else{
            
            string line;
            while(getline(readfile,line)){
                cout << line << endl;
            }
            readfile.close();
        }
    }
};

int main(){

    student s;
    int choice;
    cout << "-------Student database-------" << endl;
    do{
        cout << "---------------------" << endl;
        cout << "Main Menu" << endl;
        cout << "1:Add student" << endl << "2:Show all students." << endl << "3:Exit" << endl;
        cin >> choice;
    cin.ignore();
    switch(choice){

        case 1:
            s.input();
            s.saveinfile();
            break;
        
        case 2:
            s.readfromfile();
            break;

        case 3:
            cout << "Exiting" << endl;
            break;
        
        default:
            cout << "Invalid Choice!!" << endl;
            break;
    }
}while(choice != 3);

return 0;
}