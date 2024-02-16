#include <iostream>
using namespace std;
// Diamond Pattern

int main()
{
    int n;
    cout << "Enter the number of rows";
    cin >> n;
    if (n % 2 == 0)
    {
        n++;
    }

    for (int i = 1; i <= n; i += 2)
    {
        for (int j = 0; j < (n - i) / 2; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = n-2; i>=1; i -= 2)
    {
        for (int j = 0; j < (n - i) / 2; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}