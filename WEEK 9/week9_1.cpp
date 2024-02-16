#include <iostream>
using namespace std;
// factorial by both recursive and non-recursive
// GCD of two integers by recursive and non recursive

long long int fact_rec(int a)
{
    if (a == 1 || a == 0)
    {
        return 1;
    }
    else
    {
        return a * fact_rec(a - 1);
    }
}

long long int fact_NRec(int a)
{
    if (a < 0)
    {
        cout << "Factorial of negative number is not possible";
        return 0;
    }

    int b = 1;
    // cout << "Factorial is   ";
    for (int i = 1; i <= a; i++)
    {
        b *= i;
    }
    return b;
}

int main()
{
    int x;
    long int factAns, factAns2;

    cout << "Enter the number for which you want the factorial number\n";
    cin >> x;

    factAns = fact_NRec(x);
    factAns2 = fact_rec(x);

    cout << "Factorial (non-recursive)  "<<factAns << endl;
    cout << "Factorial (recursive)  "<<factAns2 << endl;
}