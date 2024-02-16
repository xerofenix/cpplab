#include <iostream>
using namespace std;
// length of string using pointer: running

int lnthStr(char *str)
{
    int lnth = 0;
    while (*str != '\0')
    {
        lnth++;
        *str++;
    }
    return lnth;
}

int main()
{
    char strng[100];
    int length;

    cout << "Enter a string: ";
    cin.getline(strng, 100);
    length = lnthStr(strng);
    cout << "Length of the string is: " << length;
}