#include <iostream>
#include <string>
//Write a c++ program to create 3 objects for a class named pntr_obj with data members such as roll_no & name. Create a meneber funtion st_data() for setting the data values and print() member function to print which object has invoked using the 'this' pointer: running
using namespace std;

class pntr_obj
{
private:
    int roll_no;
    string name;

public:
    void set_data(int roll, const string student_name)
    {
        roll_no = roll;
        name = student_name;
    }

    void print()
    {
        cout << "Roll No: " << roll_no << endl;
        cout << "Name: " << name << endl;
        cout << "Object invoked: " << this << endl;
    }
};

int main()
{
    pntr_obj obj1, obj2, obj3;

    obj1.set_data(1, "John");
    obj2.set_data(2, "Anna");
    obj3.set_data(3, "Ethan");

    cout << "Object 1" << endl;
    obj1.print();
    cout << endl;

    cout << "Object 2" << endl;
    obj2.print();
    cout << endl;

    cout << "Object 3" << endl;
    obj3.print();
    cout << endl;

    return 0;
}
