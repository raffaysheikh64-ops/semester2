#include<iostream>
#include<string>
using namespace std;

class Car{
    private:
        int yearModel;
        string make;
        int speed;

    public:
        Car(int year, string m){
            yearModel = year;
            make      = m;
            speed     = 0;
        }

        int    getYearModel(){
            return yearModel; 
            }
        string getMake()     {
            return make; 
        }
        int    getSpeed()    { 
            return speed; 
        }
        void accelerate(){
            speed += 5;
        }

        void brake(){
            speed -= 5;
        }
};

int main(){

    Car myCar(2022, "Toyota");

    cout << "Car: " << myCar.getYearModel() 
    << " "     << myCar.getMake()      << endl;
    cout << "--------------------------" << endl;
    cout << "Accelerating..." << endl;
    for(int i = 0; i < 5; i++){
        myCar.accelerate();
        cout << "Current Speed: " << myCar.getSpeed() << " mph" << endl;
    }

    cout << "--------------------------" << endl;
    cout << "Braking..." << endl;
    for(int i = 0; i < 5; i++){
        myCar.brake();
        cout << "Current Speed: " << myCar.getSpeed() << " mph" << endl;
    }
    cout << "--------------------------" << endl;

    return 0;
}