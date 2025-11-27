#include <iostream>
#include <string>
using namespace std;

class Product {
protected:
    int price;
    string brand;

public:
    Product(int p, string b) {
        price = p;
        brand = b;
    }
};

class DiscountedProduct : protected Product {
public:

    DiscountedProduct(int p, string b) : Product(p, b) {}


    void applyDiscount(float percent) {
        float discountAmount = price * (percent / 100.0);
        price -= discountAmount;

        cout << "Brand: " << brand << endl;
        cout << "Price after " << percent << "% discount: " << price << endl;
    }
};

int main() {
    DiscountedProduct d(1000, "Nike");
    d.applyDiscount(20); // apply 20% discount
    return 0;
}