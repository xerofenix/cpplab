#include <iostream>
using namespace std;
// adding two numbers without +
int main()
{
    int a, b;
    cout << "Enter two numbers" << endl;
    cin >> a;
    cin >> b;
    // cout<<"Enter another number"
    for (int i = 1; i <= b; i++)
        a = a + 1;
    cout << "The sum is " << a;
}
