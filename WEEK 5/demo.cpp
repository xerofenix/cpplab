#include <iostream>
using namespace std;
// Number decreasing patterns
int main()
{
    int n;
    cout<<"Enter a number :";
    cin>>n;

    for (int i = n; i >=1; i--)
    {
        for (int j = 1; j <=i; j++)
        {
            /* code */
            cout<<j;
        }
        cout<<endl;
        
    }
    
    
}