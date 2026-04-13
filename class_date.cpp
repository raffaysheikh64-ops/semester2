#include<iostream>
#include<string>
using namespace std;
void setDate(int m, int d, int y);
class Date{
    private:
    int year, month , day;

    string months_name(){
        string months[] = {"January","Feburary" , "March" , "April" , "May" , "June"
                        "July" , "August" , "September" , "October" , "November" , "December"};
                return months[month -1];
    }

    public:

    Date(){
        month = 1 , day = 1 , year = 2000;
    }

    Date(int m, int d, int y){
        setDate(m ,d ,y);
    }

    void setDate(int m, int d, int y){
        if(m < 1 || m > 12){
            cout << "Invalid month entered.Setting to 1" << endl;
            month = 1;
        }
        else{
            month = m;
        }

        if(d < 1 || d > 31){
            cout << "Invalid day entered.Setting to 1" << endl;
        }
        else{
            day = d;
        }

        year = y;
    }

    void format1(){
        
        cout << month << "/" << day << "/" << year % 100 << endl;
    }

    void format2(){
        cout << months_name() << " " << day << " " << year << endl;
    }

    void format3(){
        cout << day << " " << months_name() << " " << year << endl;
    }
};  

int main(){

    int d , m, y;
    cout << "Day, month and year please: ";
    cin >> d >> m >> y;
    Date date(m, d, y);

    cout << "\nDate in different formats" << endl;
    date.format1();
    date.format2();
    date.format3();

    return 0;
}