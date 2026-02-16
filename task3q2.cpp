#include <iostream>
#include <string>
using namespace std;

class WeekDays {
private:
    string Days[7];
    int CurrentDay;

public:
    WeekDays() {
        Days[0] = "Sunday";
        Days[1] = "Monday";
        Days[2] = "Tuesday";
        Days[3] = "Wednesday";
        Days[4] = "Thursday";
        Days[5] = "Friday";
        Days[6] = "Saturday";
        CurrentDay = 0;
    }

    WeekDays(int d) {
        Days[0] = "Sunday";
        Days[1] = "Monday";
        Days[2] = "Tuesday";
        Days[3] = "Wednesday";
        Days[4] = "Thursday";
        Days[5] = "Friday";
        Days[6] = "Saturday";
        CurrentDay = d % 7;
    }

    string getCurrentDay() {
        return Days[CurrentDay];
    }

    string getNextDay() {
        return Days[(CurrentDay + 1) % 7];
    }

    string getPreviousDay() {
        int prev = CurrentDay - 1;
        if (prev < 0) {
            prev = 6;
        }
        return Days[prev];
    }

    string getNthDayFromToday(int n) {
        int futureDay = (CurrentDay + n) % 7;
        return Days[futureDay];
    }
};

int main() {
    WeekDays w1;
    cout << "Default (Sunday):" << endl;
    cout << "Current Day: " << w1.getCurrentDay() << endl;
    cout << "Next Day: " << w1.getNextDay() << endl;
    cout << "Previous Day: " << w1.getPreviousDay() << endl;
    cout << "20 days from today: " << w1.getNthDayFromToday(20) << endl;
    cout << endl;

    WeekDays w2(1);
    cout << "Starting from Monday:" << endl;
    cout << "Current Day: " << w2.getCurrentDay() << endl;
    cout << "Next Day: " << w2.getNextDay() << endl;
    cout << "Previous Day: " << w2.getPreviousDay() << endl;
    cout << "20 days from today: " << w2.getNthDayFromToday(20) << endl;
    cout << endl;

    WeekDays w3(8);
    cout << "Starting from day 8 (8%7=1 = Monday):" << endl;
    cout << "Current Day: " << w3.getCurrentDay() << endl;
    cout << "Next Day: " << w3.getNextDay() << endl;
    cout << "Previous Day: " << w3.getPreviousDay() << endl;
    cout << "5 days from today: " << w3.getNthDayFromToday(5) << endl;
    cout << endl;

    WeekDays w4(5);
    cout << "Starting from Friday:" << endl;
    cout << "Current Day: " << w4.getCurrentDay() << endl;
    cout << "3 days from today: " << w4.getNthDayFromToday(3) << endl;
    cout << "10 days from today: " << w4.getNthDayFromToday(10) << endl;

    return 0;
}