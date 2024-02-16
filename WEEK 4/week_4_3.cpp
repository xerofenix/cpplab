#include <iostream>
using namespace std;
// evaluate arithmatic expession ((a + b / c * d - e) * (f - g))
int main()
{
	float a, b, c, d, e, f, g;
	cout << "Enter 'a'\n";
	cin >> a;
	cout << "Enter 'b'\n";
	cin >> b;
	cout << "Enter 'c'\n";
	cin >> c;
	cout << "Enter 'd'\n";
	cin >> d;
	cout << "Enter 'e'\n";
	cin >> e;
	cout << "Enter 'f'\n";
	cin >> f;
	cout << "Enter 'g'\n";
	cin >> g;
	cout << "the value of the given expression is : " << ((a + b / c * d - e) * (f - g));
}
