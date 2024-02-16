#include <iostream>
using namespace std;
// Sum of all array elements
int main()
{
    int n,sum=0;
    cout<<"Enter the number of elements you want in the array\n";
    cin>>n;
    int ar[n];
    cout<<"Enter the of elements in the array\n";

    for (int i = 0; i < n; i++)
    {
        cin>>ar[i];
        sum=sum+ar[i];
    }
    cout<<"The sum of all elements :"<<sum;

}