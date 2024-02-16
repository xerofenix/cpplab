#include <iostream>
using namespace std;

class Calculator
{
private:
    double num1, num2, num3, num4;

public:
    Calculator(double a, double b, double c, double d)
    {
        num1 = a;
        num2 = b;
        num3 = c;
        num4 = d;
    }

    void performOperations()
    {
        cout << "Addition: " << num1 + num2 << endl;
        cout << "Subtraction: " << num1 - num2 << endl;
        cout << "Multiplication: " << num1 * num2 << endl;
        cout << "Division: " << num1 / num2 << endl;
        
    }
};

int main()
{
    double a, b, c, d;
    cout << "Enter 2 inputs for calculation: ";
    cin >> a >> b ;
    Calculator calc(a, b, c, d);

    calc.performOperations();

    return 0;
}
