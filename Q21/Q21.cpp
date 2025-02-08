#include <iostream>
using namespace std;

int main() 
{
    int n, a = 1, b = 1, next;

    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++) 
    {
        for (int j = 1; j <= i; j++) 
        {
            cout << a << " ";
            next = a + b;
            a = b;
            b = next;
        }
        cout << endl;
    }

    return 0;
}
