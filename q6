
#include <iostream>
using namespace std;

class Attendance {
private:
    string clockIn;
    string clockOut;
    bool isSet;

public:
    Attendance() {
        isSet = false;
    }

    void setTimes(string inTime, string outTime) {
        if (!isSet) {
            clockIn = inTime;
            clockOut = outTime;
            isSet = true;
        }
        else{
          cout<<"Can not modify"
    }
    }

    string getClockIn() {
        return clockIn;
    }

    string getClockOut() {
        return clockOut;
    }
};

int main() {
    Attendance emp;

    emp.setTimes("09:00 AM", "05:00 PM");

    cout << "Clock-in time: " << emp.getClockIn() << endl;
    cout << "Clock-out time: " << emp.getClockOut() << endl;

    emp.setTimes("10:00 AM", "06:00 PM"); // Will not change times

    cout << "After trying to reset:" << endl;
    cout << "Clock-in time: " << emp.getClockIn() << endl;
    cout << "Clock-out time: " << emp.getClockOut() << endl;

    return 0;
}
