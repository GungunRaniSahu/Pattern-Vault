#include <iostream>
using namespace std;

int main() 
{
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;
    for (int i = 1; i <= rows; i++)
      {
        for (int j = i; j < rows; j++)
         {
            cout << " ";
        }
        for (int k = 1; k <= i; k++) 
        {
            cout << k << " ";
        }
        cout << endl;
    }
    return 0;
}
