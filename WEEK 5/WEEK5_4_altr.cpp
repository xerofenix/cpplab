#include <iostream>
using namespace std;
// finding the second largest number in the array : running
int findSecondLargest(int arr[], int size)
{
    int largest = 0;
    int secondLargest = 0;
    for (int i = 0; i < size; ++i)
    {
        if (arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondLargest && arr[i] != largest)
        {
            secondLargest = arr[i];
        }
    }
    return secondLargest;
}

int main()
{
    cout << "Enter the number of elements you want in the array: ";
    int n;
    cin >> n;
    int arr[n];
    cout<<"Enter the elements\n";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int secondLargest = findSecondLargest(arr, n);
    cout << "The second largest element is: " << secondLargest << endl;
    return 0;
}
