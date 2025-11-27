#include <iostream>
#include <string>
using namespace std;

class Payment {
    public:
    virtual void type() {
        cout<<"Payment Done!"<<endl;
    }
};
class CreditCardPayment : public Payment {
    public:
    void type() {
        cout<<"Payment Done via Credit Card!"<<endl;
    }
};
class CashPayment : public Payment {
public:
    void type() {
        cout<<"Payment Done via Cash!"<<endl;
    }
};
class UPIPayment : public Payment {
public:
    void type() {
        cout<<"Payment Done via UPI!"<<endl;
    }
};

int main() {
    Payment p;
    p.type();
    Payment *payment;
    CreditCardPayment creditCardPayment;
    CashPayment cashPayment;
    UPIPayment upi;
    payment = &creditCardPayment;
    payment->type();
    payment = &cashPayment;
    payment->type();
    payment = &upi;
    payment->type();
    return 0;
}