#include<iostream>
using namespace std;
void week4A4()
{
    int n;
    cout << "Enter number of terms in fibonacci series: " << endl;
    cin >> n;
    int first = 0, second = 1;
    for (int i = first; i <= n - 1; i++)
    {
        cout << first << " ";
        int next = first + second;
        first = second;
        second = next;
    }
}
void week4A5()
{
    int n;
    int flag = 0;
    int i, j;
    cout << "Enter a number to generate all the prime numbers between 1 and n: ";
    cin >> n;
    if (n < 2)
    {
        cout << "invalid entry";
    }
    for (i = 2; i <= n; i++)
    {
        flag = 0;
        for (j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            cout << i << " ";
        }
    }
}
int main()
{
    // week4A4();
    week4A5();
}