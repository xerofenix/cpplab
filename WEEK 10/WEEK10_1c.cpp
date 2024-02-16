#include <iostream>
#include <complex>
// Addition and subtraction of two complex numbers 

using namespace std;

int main() {
    complex<double> c1, c2;
    cout << "Enter two complex numbers: ";
    cin >> c1 >> c2;
    cout << "Sum: " << c1 + c2 << endl;
    cout << "Difference: " << c1 - c2 << endl;
    return 0;
}
