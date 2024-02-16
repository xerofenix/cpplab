#include <iostream>
using namespace std;
// prime numbers b/w 1 &n
int main()
{
	int n, i, j, k, count=0;
	cout << "Enter a number upto which you want the prime numbers: ";
	cin >> n;
	cout<<"The prime numbers are\n";
	for (i = 1; i <= n; i++)
	{
		if (i == 1 || i == 0)
			continue;

		k = 1;

		for (j = 2; j <= i / 2; j++)
		{
			if (i % j == 0)
			{
				k = 0;
				break;
			}
		}
		if (k == 1)
		{
			// count++;
			cout << " " << i;
		}
	}
	// cout<<endl<<"The number of primes = "<<count;
}
