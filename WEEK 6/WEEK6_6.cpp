#include <iostream>
using namespace std;
// concatinate two strings using pointer : running

void concatenateStrings(char *str1, const char *str2)
{
    // Move the pointer to the end of str1
    while (*str1)
    {
        str1++;
    }

    // Copy characters from str2 to str1
    while (*str2)
    {
        *str1 = *str2;
        str1++;
        str2++;
    }

    // Add null terminator to str1
    *str1 = '\0';
}

int main()
{
    char str1[100], str2[100];

    cout << "Enter the first string: ";
    cin.getline(str1, sizeof(str1));

    cout << "Enter the second string: ";
    cin.getline(str2, sizeof(str2));

    concatenateStrings(str1, str2);

    cout << "Concatenated string: " << str1 << endl;

    return 0;
}
