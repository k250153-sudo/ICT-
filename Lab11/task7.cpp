#include <iostream>
#include <string.h>
using namespace std;

class Printer {
    public:
    void printInfo(string name) {
        cout << "Name: " << name << endl;
    }
    void printInfo(string name,int age) {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
    void printInfo(string name,int age, string city) {
        cout << "Name: " << name << ", Age: " << age << ", City: "<< city << endl;
    }
};
int main() {
    Printer p;
    p.printInfo("Mudassir");
    p.printInfo("Mudassir",20);
    p.printInfo("Mudassir",20,"Karachi");
    return 0;
}