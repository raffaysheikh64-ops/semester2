#include<iostream>
#include<string>
using namespace std;

class RetailItem{
    private:
        string description;
        int unitsOnHand;
        double price;
    public:
        RetailItem(string desc,int units,double p){
            description = desc;
            unitsOnHand = units;
            price = p;
        }

        RetailItem(){
            description = "";
            unitsOnHand = 0;
            price = 0.00;
        }

    void setDescription(string desc){
        description = desc;
    }
    void setunitsOnHand(int units){
        unitsOnHand = units;
    }
    void setPrice(double p){
        price = p;
    }

    string getDescription(){
        return description;
    }
    int getunitsOnHand(){
        return unitsOnHand;
    }
    double getPrice(){
        return price;
    }

    void displayItems(){
        cout << "Description: " << description << endl;
        cout << "Units On Hand: " << unitsOnHand << endl;
        cout << "Price: " << price << endl;
    }
};

int main(){

    RetailItem item1("Jacket",12,5900);
    RetailItem item2("Designer Jeans",40,3400);
    RetailItem item3("Shirt",20,2900);

    cout << "------------------" << endl;
    item1.displayItems();
    cout << "------------------" << endl;
    item2.displayItems();
    cout << "------------------" << endl;
    item3.displayItems();
    cout << "------------------" << endl;

    return 0;
}