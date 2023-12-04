#include <iostream>
using namespace std;

void age(int age) {
    if (age > 16 && age < 65) {
        cout << "You are within the working age." << endl;
    } else {
        cout << "You are not within the working age." << endl;
    }
}

int main() {
   int ageinput;
        cout << "How old are you ";
        cin >> ageinput;
        age(ageinput);
}



