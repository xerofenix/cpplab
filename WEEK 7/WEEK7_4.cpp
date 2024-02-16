#include <iostream>
using namespace std;
// Write a c++ program to create 3 objects for a class named pntr_obj with data members such as roll_no & name. Create a menmber funtion st_data() for setting the data values and print() member function to print which object has invoked using the 'this' pointer  :running

class pntr_obj
{
    string name;
    int roll_no;

public:
    void set_data(int roll, const string &student_name)
    {
        roll_no = roll;
        name = student_name;
    }

    void print()
    {
        cout << this->name << " " << this->roll_no << endl;
    }
};

int main()
{
    pntr_obj obj1, obj2, obj3;

    obj1.set_data(11, "Moto");
    obj2.set_data(12, "carlie");
    obj3.set_data(13, "Hello");

    obj1.print();
    obj2.print();
    obj3.print();

    return 0;
}