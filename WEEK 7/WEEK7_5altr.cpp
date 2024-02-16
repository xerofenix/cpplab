#include <iostream>
using namespace std;

class Numbers
{
private:
    int num1;
    int num2;

public:
    Numbers(int n1, int n2)
    {
        num1 = n1;
        num2 = n2;
    }

    int getGreaterNumber()
    {
        return (num1 > num2) ? num1 : num2;
    }
};

int main()
{
    int num1, num2;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    Numbers obj(num1, num2);
    int greaterNumber = obj.getGreaterNumber();

    cout << "The greater number is: " << greaterNumber << endl;

    return 0;
}
