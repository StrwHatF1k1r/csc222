#include <iostream>
using namespace std;

void compare(int a, int b) {
    if (a < b) {
        cout << a << " is less than " << b << endl;
    } else if (a == b) {
        cout << a << " is equal to " << b << endl;
    } else {
        cout << a << " is greater than " << b << endl;
    }
}

int main() {
    compare(1, 420);
    compare(21, 21);
    compare(2, 1);
     return 0;
}