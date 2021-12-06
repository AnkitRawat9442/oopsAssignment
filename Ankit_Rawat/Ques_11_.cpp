/** 11.	Define a class Bus in c++ with the following specifications. 							
Data Member
Busno.- to store Bus no
from- To store place name of origin
to- to store place name of destination
type- to store bus type such as 'O' for ordinary
Distance- To store the distance in km
fare- to store the bus fare
member function
A constructor function to initialize type as 'O' and fare as 500
A function calcfare() to calculate fare as per the following criteria
type	fare
'o'	15*distance;
'e'	20*distance;
'l'	24*distance
a function allocate() to alow user to enter values for busno, from, to, type and distance .
Also,this function should call calcfare() to calculate fare.
a function show() to display the content of all the data member on screen; 
make a destructor which should print the details of destroyed object.

**/


#include <iostream>
using namespace std;
class Bus
{
    int bus_no;
    string from, to;
    char type;
    float distance, fare;
public:
    Bus()
    {
        type = 'O';
        fare = 500;
    }
    void cal_fare()
    {
        if (type == 'O')
            fare = 15 * distance;
        else if (type == 'E')
            fare = 20 * distance;
        else if (type == 'L')
            fare = 24 * distance;
    }

    


    void allocate()
    {
    cout << "_____ Available Bus type -> O , L , E\n";
        cout << "Enter the Detail \n";
        cout << "Bus-no  -> ";
        cin >> bus_no;
        cout << "Bus-Type  -> ";
        cin >> type;
        cout << "Journey Start from  -> ";
        cin >> from;
        cout << "Journey  to  -> ";
        cin >> to;
        cout << "Distance -> ";
        cin >> distance;
        cal_fare();
    }







    void display()
    {
        cout << "\nJourney Detail \n";
        cout << "Bus-Number --> " << bus_no << "\nBus-Type --> " << type << "\nJourney From --> " << from << "\nJourney to --> " << to;
        cout << "\nDistance --> " << distance << "\nTotal Fare  ---> Rs." << fare << "/.\n";
    }
};

int main()
{
    cout << "______________ A N K I T   R A W A T _____________________" << endl;
    cout << "\nName : Ankit Rawat\nSection : G\nST ID : 20011670 \n\n";
    Bus b;
    b.allocate();
    b.display();
    return 0;
}