#include <iostream>
using namespace std;
// add two numbers using pointer : running
int main()
{
    float a, b, add;
    float *ptr_a, *ptr_b, *ptr_add;
    cout << "Enter two numbres\n";
    cin >> a >> b;
    ptr_a = &a;
    ptr_b = &b;
    add = *ptr_a + *ptr_b;
    cout << "\nThe sum of both numbers: " << add;
}