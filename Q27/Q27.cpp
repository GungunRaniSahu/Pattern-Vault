#include <iostream>
using namespace std;

void printAlternatingPyramid(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        char symbol = (i % 2 == 1) ? '*' : '#';
        for (int j = 1; j <= i; j++) {
            cout << symbol << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    printAlternatingPyramid(n);
    return 0;
}
