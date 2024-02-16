#include <iostream>
using namespace std;
// Print string using pointer : running

int main()
{
    char mystr[1000];
    
    cout << "Enter any string: ";
    cin.getline(mystr , 1000);
    char *ptr;
    ptr = &mystr[0];
    cout<<mystr;
}