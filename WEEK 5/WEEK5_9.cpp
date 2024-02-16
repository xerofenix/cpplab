#include <iostream>
using namespace std;
// frequency of a particular number : running   

int main()
{
    int n, ch, count = 0;
    cout << "Enter the number of element of array\n";
    cin >> n;

    int arr[n];
    cout << "Enter array elements\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the number for which you want to check frequency: ";

    cin >> ch;

    for (int i = 0; i < n; i++)
    {
        if (ch == arr[i])
        {
            count++;
        }
    }

    cout<<"The frequency of "<<ch<<" is "<<count;
}