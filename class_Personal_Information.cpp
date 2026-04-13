#include<iostream>
#include<string>
using namespace std;

class Personaldata{
    private:
        string name, address, phonenumber;
        int age;
    public:
        Personaldata(){
    name = "";
    address = "";
    age = 0;
    phonenumber = "";
}

    void setName(string n){
        name = n;
    }
    void setAddress(string a){
        address = a;
    }
    void setAge(int y){
        age = y;
    }
    void setPhonenumber(string ph){
        phonenumber = ph;
    }
    string getName(){
        return name;
    }
    string getAddress(){
        return address;
    }
    int getAge(){
        return age;
    }
    string getPhonenumber(){
        return phonenumber;
    }

    void displayinfo(){
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Address: " << address << endl;
        cout << "Phone number: " << phonenumber << endl;
    }
};

int main(){

    Personaldata mydata;
    mydata.setName("Abdul Raffay");
    mydata.setAddress("Nishat Colony, Lahore Cantt");
    mydata.setAge(19);
    mydata.setPhonenumber("+923456789123");
    
    Personaldata familydata;
    familydata.setName("Sheikh Junaid");
    familydata.setAge(47);
    familydata.setAddress("Nishat Colony, Lahore Cantt");
    familydata.setPhonenumber("+913098765321");

    Personaldata friendata;
    friendata.setName("Abdullah Mughal");
    friendata.setAge(20);
    friendata.setAddress("Nishat Colony");
    friendata.setPhonenumber("+92321567891");

    cout << "----------------------" << endl;
    cout << "My Personal information:-" << endl;
    mydata.displayinfo();
    cout << "----------------------" << endl;
    cout << "Family Information:-" << endl;
    familydata.displayinfo();
    cout << "----------------------" << endl;
    cout << "Friend Information:-" << endl;
    friendata.displayinfo();
    cout << "----------------------" << endl;

    return 0;
}