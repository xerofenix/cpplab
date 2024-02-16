#include <iostream>
using namespace std;
// count vowels : running

int countvowels(char *str)
{
    int cnt =0;
    while (*str != '\0')
    {
        if (*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u' || *str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U')
        {
            cnt++;
        }
        *str++;
    }
    return cnt;
}

int main()
{
    char strng[100];
    int count;


    cout << "Enter a string: ";
    cin.getline(strng, 100);
    count = countvowels(strng);
    cout <<"The number of vowels are: "<< count;
}