#include <iostream>
using namespace std;
// second largest integers in a list of integers : running but fail in repettitive value
int main()
{
	cout<<"Enter 5 numbers\n";
	int ar[5], i, j, x;
	for ( i = 0; i < 5; i++)
	{
		cin>>ar[i];
	}
	for ( i = 0; i < 5; i++)
	{
		for ( j = i+1; j < 5 ; j++)
		{
			if (ar[i] < ar[j])
			{
				x = ar[i];
				ar[i] = ar[j];
				ar[j] = x;
			}
			
		}
		
	}
	
	for ( i = 0; i < 5; i++)
	{
		cout<<ar[i];
	}
	cout<<"The second largest number is :"<<ar[1];
}
