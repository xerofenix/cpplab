#include <iostream>
using namespace std;
// reading elements using pointer into an array and dispay the values using array
int main()
{
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;
    int arr[n];
    int *ptr = arr;

    // Read elements into the array using pointers
    for (int i = 0; i < n; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> *(ptr + i);
    }
    cout << "Entered elements: ";
    // Display the values using array indexing
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}