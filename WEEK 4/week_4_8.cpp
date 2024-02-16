#include <iostream>
#include <cmath>
using namespace std;
// Armstrong number
int main()
{
	// sum of its own digits raised to the power of no. of digits is equal to itself
	// first write a code to count the number of digits
	int number, sum = 0, count = 0;
	cout << "Enter a number to check whether Armstrong or not: ";
	cin >> number;
	int originalNumber = number;
	int temp = number;
	int digit;
	while (number > 0)
	{
		count++;
		number /= 10;
	}
	while (originalNumber > 0)
	{
		digit = originalNumber % 10;
		sum += pow(digit, count);
		originalNumber /= 10;
	}

	if (sum == temp)
		cout << "Given number " << temp << " is a Armstrong number.";
	else
		cout << "Given number " << temp << " is not a Armstrong number.";
}
