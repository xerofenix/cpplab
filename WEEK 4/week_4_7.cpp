#include <iostream>
#include <cmath>
using namespace std;
// Roots of quadratic equation
int main()
{
	float a, b, c, dis, x, y, rlprt, cmplxprt;
	cout << "Enter the coefficient of x square: ";
	cin >> a;
	cout << "Enter he coefficient of x: ";
	cin >> b;
	cout << "Enter the constant term: ";
	cin >> c;
	dis = b * b - 4 * a * c;

	if (dis > 0)
	{
		cout << "Your roots are real and distinct\n";
		x = (-b + sqrt(dis)) / (2 / a);
		y = (-b - sqrt(dis)) / (2 / a);
		cout << x << " , " << y;
	}

	else if (dis == 0)
	{
		cout << "Your roots are real and equal\n";
		x = (-b + sqrt(dis)) / (2 / a);
		y = (-b - sqrt(dis)) / (2 / a);
		cout << x << " , " << y;
	}

	else
	{
		cout << "Your roots are not real\n";
		rlprt = -b / (2 * a);
		cmplxprt = sqrt(-dis) / (2 * a);
		cout << rlprt << "+" << cmplxprt << " i"
			 << " , " << rlprt << "-" << cmplxprt << " i";
	}
}
