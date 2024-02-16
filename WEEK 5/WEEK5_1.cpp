#include <iostream>
using namespace std;
// Entering elements in array and displaying it: running
int main()
{
    int n;
    cout << "Enter the number of elements you want in the array\n";
    cin >> n;
    int ar[n];
    cout << "Enter the elements of the array\n";

    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    cout << "You enterd ";
    for (int i = 0; i < n; i++)
    {
        cout << ar[i] << ", ";
    }
}