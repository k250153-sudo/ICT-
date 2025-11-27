#include <iostream>
#include <string.h>
using namespace std;

class Bankaccount {
    private:
    string name;
    double balance;
    public:
    Bankaccount(string n, double initialbalance) {
        name = n;
        balance = initialbalance;
        cout << "Account created for "<< n << endl;

    }

};
int main() {
    Bankaccount Bankaccount1("Mudassir", 1500);
    return 0;
}