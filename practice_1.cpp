#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    // Check if num is a multiple of 5
    if (num % 5 == 0) {
        cout << "HiFive" << endl;
    }

    // Check if num is even
    if (num % 2 == 0) {
        cout << "HiEven" << endl;
    }

    return 0;
}
