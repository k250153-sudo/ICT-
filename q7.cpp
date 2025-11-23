#include <iostream>
using namespace std;

class Student {
public:
    string name;
    string studentID;
    string registeredCourses[5];
    int courseCount;

    Student() {
        courseCount = 0;
    }

    void addCourse(string course) {
        if (courseCount < 5) {
            registeredCourses[courseCount] = course;
            courseCount++;
            cout << course << " added. Slots remaining: " << 5 - courseCount << endl;
        } else {
            cout << "Cannot add " << course << ". Course limit reached." << endl;
        }
    }

    void displayCourses() {
        cout << "Student Name: " << name << endl;
        cout << "Student ID: " << studentID << endl;
        cout << "Registered Courses: ";
        for (int i = 0; i < courseCount; i++) {
            cout << registeredCourses[i];
            if (i < courseCount - 1) cout << ", ";
        }
        cout << endl;
    }
};

int main() {
    Student s1;
    s1.name = "Ahmed";
    s1.studentID = "S123";

    s1.addCourse("Calculus");
    s1.addCourse("Physics");
    s1.addCourse("PF");
    s1.addCourse("FE");
    s1.addCourse("ICT");
    s1.addCourse("ICP"); // Will be rejected

    s1.displayCourses();

    return 0;
}
