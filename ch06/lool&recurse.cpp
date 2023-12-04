#include <iostream>
using namespace std;

void loop_forever(int n) {
    while (true) {
        cout << "n is now " << n << "." << endl;
        n = n + 1;
    }
}
void recurse_forever(int n) {
    cout << "n is now " << n << "." << endl;
    recurse_forever(n + 1);
}
int main() {
    loop_forever(1);
    recurse_forever(1); 

    return 0;   
} 
/*the call stack is crucial because it determines 
how functions consume memory and how deeply nested 
function calls can affect program behavior. 
In the case of loop_forever, there is no stack growth,
while in the case of recurse_forever, the stack grows 
with each recursive call, potentially leading to a stack overflow error.*/