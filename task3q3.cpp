#include <iostream>
#include <string>
using namespace std;

class SmartDevice {
private:
    string deviceName;
    string type;
    string status;

public:
    SmartDevice(string n, string t, string s) {
        deviceName = n;
        type = t;
        status = s;
        cout << deviceName << " (" << type << ") has been activated!" << endl;
    }

    ~SmartDevice() {
        cout << deviceName << " is powering down... Goodbye!" << endl;
    }

    void displayInfo() {
        cout << "Device: " << deviceName << endl;
        cout << "Type: " << type << endl;
        cout << "Status: " << status << endl;
        cout << endl;
    }

    void toggleStatus() {
        if (status == "On") {
            status = "Off";
        } else {
            status = "On";
        }
    }
};

int main() {
    SmartDevice device1("Living Room Light", "Smart Light", "Off");
    device1.displayInfo();

    SmartDevice device2("Kitchen Vacuum", "Robot Vacuum", "On");
    device2.displayInfo();

    SmartDevice device3("Morning Coffee", "Coffee Maker", "Off");
    device3.displayInfo();

    cout << "Toggling devices..." << endl;
    device1.toggleStatus();
    device1.displayInfo();

    cout << "Program ending, devices shutting down..." << endl;

    return 0;
}