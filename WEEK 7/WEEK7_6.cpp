#include <iostream>
using namespace std;
// Implement flight class with data member as flightno...source distination & fare. Write a member function information using this pointer  :running

class flight
{
    int flight_no;
    string source;
    string destination;
    double fare;

public:
    flight(int fl_no, string src, string des, double fr)
    {
        flight_no = fl_no;
        source = src;
        destination = des;
        fare = fr;
    }
    void information()
    {
        cout << "Flight Information\n";
        cout << "Flight number is:- " << this->flight_no<<endl<< "Source is:- " << this->source<<endl << "Destination is:- " << this->destination<<endl << "Fare is:- " << this->fare;
    }
};

int main()
{
    flight f1 = { 222,
                  "Russia",
                  "Canada",
                  95508 };

    f1.information();
}