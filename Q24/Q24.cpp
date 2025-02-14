#include <iostream>
using namespace std;

void printHollowPyramid(int n) 
{
    for (int i = 1; i <= n; i++) 
    {
        for (int j = 1; j <= (2 * n - 1); j++) 
        {
            if (j == n - i + 1 || j == n + i - 1 || i == n)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
}

int main() 
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    printHollowPyramid(n);
    return 0;
}
