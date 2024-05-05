#include <iostream>
#include <string>
using namespace std;

class Car {

public:
    string brand;
    string model;
    int year;

    void displayInfo(){
        cout << "Brand:" << brand <<endl;
        cout << "Model:" << model << endl;
        cout << "Yeas:" << year << endl;
    }

};
int main() {
    Car car1;
    Car car2;

    car1.brand ="Toyota";
    car1.model ="Camry";
    car1.year=2022;

    car2.brand ="Honda";
    car2.model ="Civic";
    car2.year= 2020;

    cout << "Car 1 Info : \n";
    car1.displayInfo();

    cout << "\nCar  2 Info:\n";
    car2.displayInfo();

    return 0;
}
