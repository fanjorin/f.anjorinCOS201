#include <iostream>
using namespace std;

int main() {
    int arr[8] = {12, 5, 23, 8, 3, 17, 10, 6};

    // Find the largest element
    int max = arr[0];   
    for (int i = 1; i < 8; i++) {   
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    // Find the index of the smallest element
    int minIndex = 0;
    for (int i = 1; i < 8; i++) {
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
    }

    cout << "Largest element: " << max << endl;
    cout << "Index of smallest element: " << minIndex << endl;

    return 0;
}
