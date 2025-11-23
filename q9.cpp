#include <iostream>
#include <cctype>
using namespace std;

class Passenger {
public:
    string name;

private:
    int age;
    string seatNumber;

public:
    void setAge(int a) {
        if (a >= 1 && a <= 120) {
            age = a;
        } else {
            cout << "Invalid age. Must be between 1 and 120." << endl;
        }
    }

    void setSeatNumber(string seat) {
        if (seat.length() >= 2 && isdigit(seat[0]) && isalpha(seat[seat.length() - 1])) {
            seatNumber = seat;
        } else {
            cout << "Invalid seat number. Must be in format number+letter" << endl;
        }
    }

    int getAge() {
        return age;
    }

    string getSeatNumber() {
        return seatNumber;
    }
};

int main() {
    Passenger p1;
    p1.name = "Ahmed";

    p1.setAge(25);
    p1.setSeatNumber("12A");

    cout << "Name: " << p1.name << endl;
    cout << "Age: " << p1.getAge() << endl;
    cout << "Seat Number: " << p1.getSeatNumber() << endl;

    p1.setAge(130);       
    p1.setSeatNumber("7");

    return 0;
}
