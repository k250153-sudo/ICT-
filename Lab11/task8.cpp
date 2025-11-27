#include <iostream>
using namespace std;

class Area {
public:
    float area(float side) {
        return side * side;
    }
    float area(float length, float width) {
        return length * width;
    }
    float area(int radius) {
        return 3.14159 * radius * radius;
    }
};

int main() {
    Area a;
    cout << a.area(5.0f) << endl;
    cout << a.area(4.0f, 6.0f) << endl;
    cout << a.area(3) << endl;
    return 0;
}