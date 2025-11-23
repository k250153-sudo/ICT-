#include <iostream>
using namespace std;

class Patient {
private:
    int age;
    string disease;

public:
    void setAge(int a) {
        age = a;
    }

    void setDisease(string d) {
        disease = d;
    }

    int getAge() {
        return age;
    }

    string getDisease() {
        return disease;
    }
};

int main() {
    Patient p1;

    p1.setAge(30);
    p1.setDisease("Dengue");

    cout << "Age: " << p1.getAge() << endl;
    cout << "Disease: " << p1.getDisease() << endl;

    return 0;
}
