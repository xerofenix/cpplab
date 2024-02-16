 #include <iostream>
using namespace std;
class Greater {
private:
    int num1, num2;

public:
    Greater(int n1, int n2)
	{
        num1 = n1;
        num2 = n2;
    }

    int findGreatest()
	{
        if (this->num1 > this->num2)
		{
            return this->num1;
        }
		else
		{
            return this->num2;
        }
    }
};

int main()
{
    int n1, n2;

    cout << "Enter two numbers: ";
    cin >> n1 >> n2;

    Greater greaterObj(n1, n2);

    int greatest = greaterObj.findGreatest();

    cout << "The greatest number is: " << greatest << endl;

    return 0;
}