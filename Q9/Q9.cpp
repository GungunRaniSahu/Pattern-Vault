#include <iostream>
using namespace std;

int main() 
{
    int n;

    cout << "Enter the number of rows for the pyramid: ";
    cin >> n;

    for (int i = 0; i < n; i++) 
    {
        for (int space = 0; space < n - i - 1; space++) 
        {
            cout << " ";
        }

        char ch = 'A';
        for (int j = 0; j <= i; j++) 
        {
            cout << ch++ << " ";
        }

        cout << endl;
    }

    return 0;
}
