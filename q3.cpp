#include <iostream>
#include <string>
using namespace std;

class book {
    string title;
    int price;
    public:
    void settitle(string s) {
        title = s;
    }
    void setprice(int p) {
        price = p;
    }
    string gettitle() {
        return title;
    }
    int getprice() {
        return price;
    }
    void updateprice(int p) {
        price = p;
    }

};

int main() {
    book b1;
    b1.settitle("Harry Potter");
    b1.setprice(250);
    cout <<"Price before: "<< b1.getprice()<<endl;
    b1.updateprice(500);
    cout <<"Price after: "<< b1.getprice() << endl;
}

