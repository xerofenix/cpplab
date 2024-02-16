#include <iostream>
using namespace std;
//print address of variabble : running

int main()
{
	int *ptr_a, a,b;
	ptr_a = &b;
	ptr_a = &a;
	cout<<"The address of the variable is "<<ptr_a;
}
