#include <iostream>
#include <string>
using namespace std;

class member {
    private:
     int validity;
     string name;
    public:
    void setValidity(int val) {
        validity = val;
    }
    void setname(string n) {
        name = n;
    }
    void printdetails() {
        cout << "Name : " << name << endl<<"Validity: "<< validity << " months" << endl ;
    }
    void renewmember(int val) {
        validity += val;
    }

};

int main() {
    member m1,m2;
    m1.setname("Mudassir");
    m1.setValidity(12);
    m2.setname("Abdullah");
    m2.setValidity(6);
    cout << "m1 before renew: "  << endl;
    m1.printdetails();
    m1.renewmember(12);
    cout << "m1 after renew: "  << endl;
    m1.printdetails();
    cout << "m2 before renew: "  << endl;
    m2.printdetails();
    m2.renewmember(5);
    cout << "m2 after renew: "  << endl;
    m2.printdetails();
    return 0;
}
