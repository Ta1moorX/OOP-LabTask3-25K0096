#include <iostream>
#include <string>
using namespace std;

class CricketPlayer {
private:
    string name;
    int jerseyNumber;
    double battingAverage;

public:
    CricketPlayer(string name, int jerseyNumber, double battingAverage) {
        this->name = name;
        this->jerseyNumber = jerseyNumber;
        this->battingAverage = battingAverage;
    }

    CricketPlayer& improveAverage(double runs) {
        this->battingAverage += runs;
        return *this;
    }

    void displayPlayerStats() {
        cout << "Player Name: " << name << endl;
        cout << "Jersey Number: " << jerseyNumber << endl;
        cout << "Batting Average: " << battingAverage << endl;
        cout << endl;
    }

    void playMatch(int runsScored) {
        battingAverage = (battingAverage + runsScored) / 2.0;
        cout << name << " scored " << runsScored << " runs!" << endl;
        cout << "Updated batting average: " << battingAverage << endl;
        cout << endl;
    }
};

int main() {
    CricketPlayer p1("Babar Azam", 56, 45.5);
    CricketPlayer p2("Muhammad Rizwan", 33, 42.8);
    CricketPlayer p3("Saim Ayub", 17, 38.2);

    cout << "Initial Player Stats:" << endl;
    p1.displayPlayerStats();
    p2.displayPlayerStats();
    p3.displayPlayerStats();

    cout << "Improving averages with method chaining:" << endl;
    p1.improveAverage(5.5).improveAverage(3.2);
    p1.displayPlayerStats();

    cout << "Playing matches:" << endl;
    p1.playMatch(120);
    p2.playMatch(85);
    p3.playMatch(95);

    cout << "Final Stats:" << endl;
    p1.displayPlayerStats();
    p2.displayPlayerStats();
    p3.displayPlayerStats();

    cout << "Babar on fire!" << endl;
    p1.playMatch(150);
    p1.displayPlayerStats();

    return 0;
}