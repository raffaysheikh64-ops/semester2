#include<iostream>
using namespace std;

class circle{
    private:
        double radius;
    public:
        double getradius(){
        return radius;
    }

    void setradius(double r){
        radius = r;
    }

    double getArea(){
        return 3.14159 * radius * radius;
    }

    circle(){
        radius = 0;
    }

    circle(double x){
        radius = x;
    }
};

int main(){

    double r;
    circle arr[5];
    circle arr2[5] = {12,7,9,14,8};
    cout << "Enter five radius: ";
    for(int i = 0; i < 5; i++){
        cin >> r;
        arr[i].setradius(r);
    }

    for(int i = 0; i < 5; i++){
        cout << "Circle " << i+1 << " - Radius: " << arr[i].getradius() << " - Area: " << arr[i].getArea() << endl;
    }

    for(int i = 0; i < 5; i++){
        cout << "Circle " << i + 6 << " - Radius: " << arr2[i].getradius() << " - Area: " << arr2[i].getArea() << endl;
    }

    return 0;
}