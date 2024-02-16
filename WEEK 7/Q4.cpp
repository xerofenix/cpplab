#include <iostream>
#include <string>
using namespace std;
class pntr_obj
{
    int roll_no;
    string name;

public:
    void set_data(int roll, string n)
    {
        roll_no = roll;
        name = n;
    }

    void print()
    {
        cout << "Object with roll no " << roll_no << " and name " << name << " has invoked the print() function." << endl;
    }
};

int main()
{
    int n1, n2, n3;
    pntr_obj obj1, obj2, obj3;
    string name1, name2, name3;
    cout << "Enter the roll  no. & name of 1st student: " << endl;
    cin >> n1 >> name1;
    obj1.set_data(n1, name1);
    cout << "Enter the roll no. & name of 2nd student: " << endl;
    cin >> n2 >> name2;
    obj2.set_data(n2, name2);
    cout << "Enter the roll no. & name of 3rd student: " << endl;
    cin >> n3 >> name3;
    obj3.set_data(n3, name3);

    obj1.print();
    obj2.print();
    obj3.print();

    return 0;
}
