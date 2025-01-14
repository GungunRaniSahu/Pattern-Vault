#include <iostream>
using namespace std;

int main() 
{
    int rows;
    cin >> rows;
    for (int i = 1; i <= rows; i++) 
    {
        char letter = 'A';
        for (int j = 1; j <= i; j++) 
        {
            cout << letter << " ";
            letter++;
        }
        cout << endl;
    }
    return 0;
}
