#include <iostream>
using namespace std;
//Fibonacci series
int main()
{
	long double n, a = 0, b = 1, nxt = 0;
	cout << "Enter the number of terms you want in the series: ";
	cin >> n;
	cout << "Fibonacci Series is: \n";

	for (int i = 1; i <= n; i++)
	{

		if (i == 1)
		{
			cout << a << ",";
			continue;
		}
		if (i == 2)
		{
			cout << b << ",";
			continue;
		}
		nxt = a + b;
		a = b;
		b = nxt;
		cout << nxt << ",";
	}
}
