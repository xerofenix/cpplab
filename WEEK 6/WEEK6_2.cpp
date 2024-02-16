#include <iostream>
using namespace std;
// swap numbers using pointers: running

float swap(float *a, float *b)
{
    float temp;
   temp = *a;
   *a = *b;
   *b = temp;
}
int main()
{
    float x, y, *ptr_x, *ptr_y;
    ptr_x = &x;
    ptr_y = &y;
    cout << "Enter two numbers\n";
    cin >> x >> y;
    cout << "Value of x and y before swapping: " << x << "    " << y<<endl;
    swap(ptr_x, ptr_y);
    cout << "Value of x and y after swapping: " << x << "    " << y;
}