#include <iostream>
#include <string>
// find a string within a sentence and replace it with anotherstring : running
using namespace std;

int main()
{
    string mainString, toReplace, replacement;
    cout << "Enter a string: ";
    getline(cin, mainString);
    cout << "Enter string that you want to Replace (part of main string): ";
    getline(cin, toReplace);
    cout << "Replace with: ";
    getline(cin, replacement);
    // Find the position of the substring to be replaced
    size_t pos = mainString.find(toReplace);

    if (pos != string::npos)
    {
        // Replace the substring with the new string
        mainString.replace(pos, toReplace.length(), replacement);

        cout << "Modified string: " << mainString << endl;
    }
    else
    {
        cout << toReplace << " not found in the main string." << endl;
    }

    return 0;
}