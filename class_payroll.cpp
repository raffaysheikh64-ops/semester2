#include<iostream>
#include<string>
using namespace std;

class PayRoll{
    private:
        double hourlyPayRate;
        int hoursWorked;
        double totalPay;

    public:
        PayRoll(double rate){
            hourlyPayRate = rate;
            hoursWorked   = 0;
            totalPay      = 0.0;
        }

        PayRoll(){
            hourlyPayRate = 0.0;
            hoursWorked   = 0;
            totalPay      = 0.0;
        }

        void setHourlyPayRate(double rate){
            hourlyPayRate = rate;
        }
        void setHoursWorked(int hours)    {
            hoursWorked = hours; 
        }

        double getHourlyPayRate(){
            return hourlyPayRate; 
        }
        int getHoursWorked()     {
            return hoursWorked;
        }
        double getTotalPay()     { 
            return totalPay; 
        }
        void calculatePay(){
            totalPay = hourlyPayRate * hoursWorked;
        }

        void displayPay(int empNum){
            cout << "Employee " << empNum << " - Hours Worked: " 
                << hoursWorked << " - Gross Pay: $" << totalPay << endl;
        }
};

int main(){

    PayRoll employees[7] = {15.50,18.00,12.75,20.00,14.25,16.80,22.50};
    int hours;

    for(int i = 0; i < 7; i++){
        cout << "Enter hours worked for Employee " << i + 1 << ": ";
        cin >> hours;
        while(hours > 60 || hours < 0){
            cout << "Invalid! Hours must be between 0 and 60." << endl;
            cout << "Re-enter hours for Employee " << i + 1 << ": ";
            cin >> hours;
        }

        employees[i].setHoursWorked(hours);
        employees[i].calculatePay();
    }

    cout << "\n       PAYROLL SUMMARY       " << endl;
    cout << "-----------------------------" << endl;
    for(int i = 0; i < 7; i++){
        employees[i].displayPay(i + 1);
    }
    cout << "-----------------------------" << endl;

    return 0;
}