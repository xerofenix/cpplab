#include <iostream>
#include <string>
using namespace std;

class Flight
{
private:
    int flight_no;
    string source;
    string destination;
    double fare;

public:
    void set_flight_info(int number, const string &src, const string &dest, double flight_fare)
    {
        flight_no = number;
        source = src;
        destination = dest;
        fare = flight_fare;
    }

    void display_info()
    {
        cout << "Flight Information" << endl;
        cout << "Flight Number: " << this->flight_no << endl;
        cout << "Source: " << this->source << endl;
        cout << "Destination: " << this->destination << endl;
        cout << "Fare: $" << this->fare << endl;
    }
};

int main()
{
    int flight_no;
    string source, destination;
    double fare;

    cout << "Enter flight number: ";
    cin >> flight_no;
    cout << "Enter source: ";
    cin.ignore(); // Ignore newline character left in the buffer
    getline(cin, source);

    cout << "Enter destination: ";
    getline(cin, destination);

    cout << "Enter fare: $";
    cin >> fare;

    Flight flight;
    flight.set_flight_info(flight_no, source, destination, fare);

    flight.display_info();

    return 0;
}
