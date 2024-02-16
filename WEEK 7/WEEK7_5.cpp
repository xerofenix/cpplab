#include <bits/stdc++.h>
using namespace std;
// find the greatest of two numbers using this pointer which returns the member variable:  running

class GreatestNumFinder
{
private:
    int num1;
    int num2;

public:
    GreatestNumFinder(int a, int b) : num1(a), num2(b) {}

    int ReturnGreatest()
    {
        return this->num1 > this->num2 ? this->num1 : this->num2;
        // if (this->num1 > this->num2)
        // {
        //     return this->num1;
        // }
        // else
        // {
        //     return this->num2;
        // }
    }
};

int main()
{
    int a, b;

    cout << "Enter the first number: ";
    cin >> a;

    cout << "Enter the second number: ";
    cin >> b;

    GreatestNumFinder finder(a, b);

    int greatest = finder.ReturnGreatest();

    cout << "The greatest number is: " << greatest << endl;

    return 0;
}