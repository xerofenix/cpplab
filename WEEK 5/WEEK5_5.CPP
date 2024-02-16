#include <iostream>
using namespace std;

// reversing array element:running

int main()
{
    int n;
    cout << "Enter the number of elements you want in the array\n";
    cin >> n;
    int ar[n];
    cout << "Enter the of elements in the array\n";

    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    cout << "The reverse elements are: \n";

    for (int i = n - 1; i >= 0; i--)
    {
        cout << ar[i] << endl;
    }
}