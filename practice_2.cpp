#include <iostream>
using namespace std;

int main() {
    int age;

    cout << "Enter your age : ";
    cin >> age;

    // Check if age is at least 18
    if (age <=  18 == 0) {
        cout << "You are an adult" << endl;
    }

    // Check if age is less than 18
    if (age > 18 == 0) {
        cout << "You are NOT an adult" << endl;
    }

    return 0;
}
