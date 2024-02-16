#include <iostream>
using namespace std;

int arraySum(int arr[], int n)
{
    if (n <= 0)
    {
        return 0;
    }
    else
    {
        return arr[n - 1] + arraySum(arr, n - 1);
    }
}

int main()
{
    cout << "Enter the size of the array:   ";
    int size;
    cin >> size;

    int arr[size];
    cout << "Enter the elements\n";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int sum = arraySum(arr, size);
    std::cout << "Sum of the array: " << sum << std::endl;
    return 0;
}
