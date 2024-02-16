#include <iostream>
#include <cmath>
// #include <math.h>
using namespace std;
// sum, mean, sd of array element using pointer: running

double arrSum(double *ar, int n)
{
    double sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += ar[i];
    }
    return sum;
}
double arrMean(double *ar, int n)
{
    double sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += ar[i];
    }
    double mn = sum / n;
    return mn;
}
double sd(double *ar, int n)
{
    double mean, smsqr = 0, mnsq;
    for (int i = 0; i < n; i++)
    {
        smsqr += ar[i] * ar[i];
    }
    smsqr = smsqr / n;
    mean = arrMean(ar, n);

    mnsq = mean * mean;

    return smsqr - mnsq;
}

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    cout << "Enter the elements\n";
    double arr[n], mean = 0, sum = 0, std = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sum = arrSum(arr, n);

    mean = arrMean(arr, n);
    std = sqrt(sd(arr, n));
    cout << "The sum is " << sum << endl
         << "The mean is "
         << mean << endl
         << "The standard deviation is " << std;
}