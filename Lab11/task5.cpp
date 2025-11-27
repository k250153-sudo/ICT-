#include <iostream>
#include <string.h>
using namespace std;

class Employee {
    protected:
    int employeeID;
    int salary; // Assuming this is per hour
    public:
    Employee(int id,int sal) {
        employeeID = id;
        salary = sal;
    }
};
class PartTimeEmployee : protected Employee {
    private:
    int hours;
    public:
    PartTimeEmployee(int id,int sal,int h):Employee(id,sal) {
        hours = h;
    }
    void getsalary() {
        int total = salary * hours;
        cout << "Total Salary = " << total << endl;
    }
};

int main() {
    PartTimeEmployee emp(123,100,20);
    emp.getsalary();
    return 0;
}