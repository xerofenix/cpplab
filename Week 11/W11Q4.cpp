#include <iostream>
#include <bitset>
using namespace std;

int main()
{
    int num, ch;
    char choice;

    do
    {
        cout << "Enter an integer number: ";
        cin >> num;
        cout << "Enter 1 for Binary\n 2 for Octal\n 3 for hexadecimal   ";
        cin>>ch;
        switch (ch)
        {
        case 1:
            cout << "Binary equivalent: " << bitset<32>(num) << endl;
            break;
        case 2:
            cout << "Octal equivalent: 0" << oct << num << endl;
            break;
        case 3:
            cout << "Hexadecimal equivalent: 0x" << hex << num << endl;
            break;

        default:
            cout << "Invalid input\n";
            break;
        }

        cout << "Do you want to continue? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    return 0;
}
