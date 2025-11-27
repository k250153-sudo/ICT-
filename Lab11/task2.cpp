#include <iostream>
#include <string.h>
using namespace std;

class Student {
    private:
    int Id;
    string Name;
    int Grade_level;
    public:
    Student(string name, int id , int grade_level) {
        Name = name;
        Id = id;
        Grade_level = grade_level;
    }
    void getname() {
        cout << Name << endl;
    }

    void getid() {
        cout << Id << endl;
    }

    void getgrade() {
        cout << Grade_level << endl;
    }
};
int main() {
    Student Student1("Mudassir", 1, 10);
    Student1.getname();
    Student1.getid();
    Student1.getgrade();
    return 0;
}