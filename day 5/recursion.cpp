#include <iostream>
using namespace std;

void greet(int n) {
    if (n == 0) {
        return;
    }
    cout << "Hello....." << endl;
    greet(n - 1);
}
int main() {
    int n;
    cout << "Enter the number of times to greet: ";
    cin >> n;
    greet(n);
    return 0;
}