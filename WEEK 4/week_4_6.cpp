#include <iostream>
using namespace std;
// show the type of character
int main()
{
	char ch;
	cout << "Enter any character\n";
	cin >> ch;
	if (ch >= 65 && ch <= 90)
		cout << "You entered a CAPITAL letter\n";

	else if (ch >= 48 && ch <= 57)
		cout << "You entered DIGIT(s)";

	else if (ch >= 97 && ch <= 122)
		cout << "You entered a SMALL CASE letter\n";

	else
		cout << "You entered a SPECIAL CHARACTER\n";
}
