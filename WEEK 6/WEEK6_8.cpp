#include <iostream>
using namespace std;
//sum of array using pointer : running

int main()
{
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    float arr[n], sum=0;
    float *ptr = &arr[0];
    cout<<"Enter elements of the array\n";
    for (int i = 0; i < n; i++)
    {
        cin>>*(ptr+i);
        sum+=*(ptr+i);
    }
    
    cout<<"The sum of the elements is: "<<sum;
}