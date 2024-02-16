#include <iostream>
using namespace std;
// display the index in a string where a word begins if not then 1

int main()
{
    string S, T;
    cout << "Enter a string S: ";
    getline(cin, S);
    cout << "Enter a word T: ";
    getline(cin, T);

    size_t pos = S.find(T);
    long len = T.length();
    int final = pos + len;

    if (pos != string::npos)
    {
        cout << T << " is from postion " << pos + 1 << " to " << final;
    }
    else
    {
        cout << "1";
    }
}