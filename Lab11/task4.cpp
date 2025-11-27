#include <iostream>
#include <string.h>
using namespace std;

class Vehicle {
private:
    string Brand;
    float Speed;
    public:
    Vehicle(string brand,float speed) {
        Brand = brand;
        Speed = speed;
    };
    void getbrand() {
        cout << Brand <<endl;
    }
    void getSpeed() {
        cout << Speed <<endl;
    }

};
class Car: public Vehicle {
    private:
    int numberofdoors;
public:
    Car(string brand,float speed, int doors) : Vehicle(brand,speed) {
        numberofdoors = doors;
    }
    void getNumberofdoors() {
        cout << numberofdoors <<endl;
    }

};

int main() {
    Car car("Toyota",240.5,4);
    car.getbrand();
    car.getSpeed();
    car.getNumberofdoors();
    return 0;
}