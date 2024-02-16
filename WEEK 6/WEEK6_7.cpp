#include <iostream>
using namespace std;
// declaring set of elememnts & printing using pointer : running
int main()
{
    // declaring a set of elements
    int arr[] = {1, 5, 9, 41, 56, 75, 19, 45, 46};

    int *ptr = &arr[0];
    // Display the values using array indexing
    cout << "array elements are : ";
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        cout << *(ptr + i) << " ";
    }

    cout << endl;
    return 0;
}