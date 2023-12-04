#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    string vote;
    map<string, int> voteCount;

    while (true) {
        getline(cin, vote);

        if (vote == "***") {
            break;
        }

        if (voteCount.find(vote) == voteCount.end()) {
            voteCount[vote] = 1;
        } else {
            voteCount[vote]++;
        }
    }

    int maxVotes = 0;
    string winner;

    for (const auto& entry : voteCount) {
        if (entry.second > maxVotes) {
            maxVotes = entry.second;
            winner = entry.first;
        } else if (entry.second == maxVotes) {
            winner = "Runoff!";
        }
    }

    if (winner != "Runoff!") {
        cout << winner << endl;
    } else {
        cout << "Runoff!" << endl;
    }

    return 0;
}
