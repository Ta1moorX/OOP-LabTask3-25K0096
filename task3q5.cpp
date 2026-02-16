#include <iostream>
#include <string>
using namespace std;

class FootballPlayer {
private:
    string playerName;
    string position;
    int goalCount;

public:
    FootballPlayer() {
        playerName = "Unknown Player";
        position = "Benchwarmer";
        goalCount = 0;
    }

    FootballPlayer(string n, string p, int g) {
        playerName = n;
        position = p;
        goalCount = g;
    }

    FootballPlayer(const FootballPlayer &player) {
        playerName = player.playerName;
        position = player.position;
        goalCount = player.goalCount;
    }

    FootballPlayer(string n, string p = "Midfielder", int g = 10) {
        playerName = n;
        position = p;
        goalCount = g;
    }

    void scoreGoal(int goals) {
        goalCount += goals;
        cout << playerName << " scored " << goals << " goal(s)!" << endl;
    }

    void displayProfile() {
        cout << "Player Name: " << playerName << endl;
        cout << "Position: " << position << endl;
        cout << "Goals: " << goalCount << endl;
        cout << endl;
    }
};

int main() {
    FootballPlayer fp1;
    cout << "Player 1 (Default Constructor):" << endl;
    fp1.displayProfile();

    FootballPlayer fp2("Lionel Messi", "Forward", 800);
    cout << "Player 2 (Parameterized Constructor):" << endl;
    fp2.displayProfile();

    FootballPlayer fp3(fp2);
    cout << "Player 3 (Copy Constructor - Clone of Messi):" << endl;
    fp3.displayProfile();

    FootballPlayer fp4("Cristiano Ronaldo");
    cout << "Player 4 (Default Arguments):" << endl;
    fp4.displayProfile();

    FootballPlayer fp5("Neymar Jr", "Winger");
    cout << "Player 5 (Default Arguments):" << endl;
    fp5.displayProfile();

    cout << "Scoring some goals:" << endl;
    fp2.scoreGoal(5);
    fp2.displayProfile();

    fp4.scoreGoal(12);
    fp4.displayProfile();

    fp5.scoreGoal(8);
    fp5.displayProfile();

    return 0;
}