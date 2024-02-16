#include <iostream>
using namespace std;
// not running

// Function to find the sum of elements in an array using recursion
int arraySum(int arr[], int size, int index)
{
    if (index < 0)
    {
        return 0;
    }

    return arr[index] + arraySum(arr, size, index - 1);
}

int main()
{

    int size;
    // int* arr = new int[size];

    cout << "Enter size for the array: ";
    cin >> size;
    int arr[size];
    cout<<"Enter array elemnts";

    for (int i = 0; i < size; i++)
    {
        cout << "-> ";
        cin >> arr[i];
    }

    int sum = arraySum(arr, size, size - 1);

    cout << "Sum of array elements using recursion: " << sum << endl;

    return 0;
}