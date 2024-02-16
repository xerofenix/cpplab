#include <iostream>
#include <complex>
//  Multiplication of two complex numbers 

using namespace std;

int main() {
    complex<double> c1, c2;
    cout << "Enter two complex numbers: ";
    cin >> c1 >> c2;
    cout << "Product: " << c1 * c2 << endl;
    return 0;
}
