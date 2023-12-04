#include <iostream>
using namespace std;

void countdown(int n) {
    if (n == 0) {
        cout << "Blastoff!" << endl;
    } else {
        cout << n << endl;
        countdown(n-1);
    }
}
int main()
{
   // runs forever because n never reaches 0 
    countdown(-1);
    return 0;
}