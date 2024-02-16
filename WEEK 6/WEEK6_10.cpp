#include <iostream>
#include <cstring>
using namespace std;
// reverse string using pointer: runing

void reversestr(char *str)
{
    int length = strlen(str);
    char *start = str;
    char *end = str + length - 1;
    while (start < end)
    {
        char temp = *start;
        *start = *end;
        *end = temp;
        end--;
        start++;
    }
}

int main()
{
    char str[1000];
    cout << "Enter any string : ";
    cin.getline(str, sizeof(str));
    // cout<<strlen(str);
    // cout<<sizeof(str)<<endl;
    reversestr(str);
    cout << str;
}