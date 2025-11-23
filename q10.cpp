#include <iostream>
using namespace std;

class PatientMonitor {
private:
    int heartRate;
    int oxygenLevel;

public:
    void setHeartRate(int hr) {
        if (hr >= 30 && hr <= 180) {
            heartRate = hr;
        } else {
            cout << "Invalid heart rate. Must be 30–180." << endl;
        }
    }

    void setOxygenLevel(int ox) {
        if (ox >= 50 && ox <= 100) {
            oxygenLevel = ox;
        } else {
            cout << "Invalid oxygen level. Must be 50–100." << endl;
        }
    }

    void showStatus() {
        if (oxygenLevel < 80) {
            cout << "Critical Alert" << endl;
        } else if (heartRate < 40 || heartRate > 150) {
            cout << "Abnormal Heart Rate" << endl;
        } else {
            cout << "Stable" << endl;
        }
    }
};

int main() {
    PatientMonitor patient1;

    patient1.setHeartRate(75);
    patient1.setOxygenLevel(85);
    patient1.showStatus(); 

    patient1.setHeartRate(160);
    patient1.showStatus(); 

    patient1.setOxygenLevel(70);
    patient1.showStatus(); 

    return 0;
}
