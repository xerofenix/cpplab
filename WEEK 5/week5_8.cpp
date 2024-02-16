#include <iostream>
using namespace std;
// merging and sorting two arrays : running

int sort(int arr[], int len)
{ // sorting logic
    for (int i = 0; i < len; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            if (arr[i] < arr[j])
            {
                int x = arr[i];
                arr[i] = arr[j];
                arr[j] = x;
            }
        }
    }
    return arr[len];
}
int main()
{
    int m, n, x;

    cout << "Enter the number of elements of the array 1\n";
    cin >> m;
    int ar1[m];
    cout << "Enter the elements of array 1\n";
    for (int i = 0; i < m; i++)
    {
        cin >> ar1[i];
    }
    ar1[m] = sort(ar1, m);
    int mergArray[m + n] = {0};
    for (int i = 0; i < m; i++)
    {
        mergArray[i] = ar1[i];
    }
    cout << "Enter the number of elements of the array 2\n";
    cin >> n;
    int ar2[n];
    cout << "Enter the elements of array 2\n";
    for (int i = 0; i < n; i++)
    {
        cin >> ar2[i];
    }

    ar2[n] = sort(ar2, n);

    for (int i = m; i < n + m; i++)
    {
        mergArray[i] = ar2[i-m];
    }
    cout << "Sorted array 1\n";
    for (int i = 0; i < m; i++)
    {
        cout << ar1[i] << " ";
    }
    cout << "\nSorted array 2\n";
    for (int i = 0; i < n; i++)
    {
        cout << ar2[i] << " ";
    }
    cout << "\nMerged and sorted Array\n";
    mergArray[m+n] = sort(mergArray,m+n);
    for (int i = 0; i < m + n; i++)
    {
        cout << mergArray[i] << "   ";
    }
}