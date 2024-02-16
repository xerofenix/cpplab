#include <iostream>
using namespace std;
// count & display negative, positive, odd and even numbers:running
int main()
{
    int i, n, j, cp = 0, cn = 0, ce = 0, co = 0;
    cout << "Enter the number of elements of array: ";
    cin >> n;
    cout << "Enter the elements of the array\n";
    int arr[n], parr[n] = {0}, narr[n] = {0}, oddarr[n] = {0}, evenarr[n] = {0};
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            cp++;
        }
        else
        {
            cn++;
            narr[i] = arr[i];
        }

        if (arr[i] % 2 == 0)
        {
            ce++;
        }
        else
        {
            co++;
        }
    }
    cout << "Total positive numbers are: " << cp;
    cout << "\nTotal negative numbers are: " << cn;
    cout << "\nTotal even numbers are: " << ce;
    cout << "\nTotal odd numbers are: " << co;
}