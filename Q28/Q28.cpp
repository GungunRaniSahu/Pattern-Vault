#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (j == 0 || j == 4 || i == 0 || i == 4)
                cout << i + 1;
            else
                cout << "0";
        }
        cout << endl;
    }
    return 0;
}
