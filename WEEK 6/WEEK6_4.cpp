#include<iostream>
using namespace std;
// increment and decrement using pointer : running
int main()
{
	float a, *ptr_a;
	cout<<"Enter a number: ";
	cin>>a;
	ptr_a = &a;
	*ptr_a = *ptr_a +1;
	cout<<"Incremented value: "<<*ptr_a<< endl;
	 *ptr_a = *ptr_a-3;
	 cout<<"Decremented value: "<<*ptr_a;
}
