#include <iostream>
#include <string.h>
using namespace std;

class Animal {
private:
    string Name;
    public:
    Animal(string name) {
        Name = name;
    }
    virtual void makesound() {
        cout << "Animal makes a generic sound!" << endl;
    }

};
class Dog : public Animal {
    public:
    Dog(string name) : Animal(name) {}
    void makesound() {
        cout << "Dog barks!" << endl;
    }
};
int main() {
    Dog dog("Tom");
    dog.makesound();
    return 0;

}