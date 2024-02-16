#include <iostream>
using namespace std;
//practicing

class student{
    public:
    string name;
    int clas;
    int roll_no;
    double marks;
};
int main()
{
student st1;
st1.name = "hello";
st1.clas = 10;
st1.roll_no = 23;
st1.marks = 56;
cout<<st1.name;
}