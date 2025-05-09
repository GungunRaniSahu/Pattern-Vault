#include <iostream>
using namespace std;

void printBinaryCheckerboard(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << (i + j) % 2 << " ";
        }
        cout << endl;
    }
}

int main() {
    int size;
    cout << "Enter the size of the checkerboard: ";
    cin >> size;

    printBinaryCheckerboard(size);

    return 0;
}
