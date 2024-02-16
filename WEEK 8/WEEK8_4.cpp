#include <iostream>
#include <string>
using namespace std;
// read text and count all occurence of a particular word: running

int main()
{
    int count = 0;
    string mainString, sString;
    cout << "Enter a string: ";
    getline(cin, mainString);
    cout << "Enter word/string to find counting: ";
    getline(cin, sString);

    size_t f = mainString.find(sString);
    while (f != string::npos)
    {
        count++;
        f = mainString.find(sString, f + 1);
    }
    cout << "The word " << sString << " appears " << count << " times in the string\n";
}