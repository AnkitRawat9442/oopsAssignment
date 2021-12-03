/****----> Create a class tollbooth with 2 data items of type unsigned int to hold the total number of the cars and the type double to hold the total amount of money collected. A member function initilizes both to 0. Member function pay_car() increament the car total and add 50 to the total cash. Another function called number_pay_car() increament the car total but add nothing . finally function to display()
 ****/

#include <iostream>
using namespace std;

class tollbooth
{
    unsigned int count_car;
    unsigned int count_non_car;
    double money;

public:
    void init()
    {
        count_car = 0;
        count_non_car = 0;
        money = 0;
    }
    void payCar()
    {
        count_car++;
        money += 50;
    }
    void nonPayCar()
    {
        count_non_car++;
    }
    void display()
    {
        cout << "\nTotal Number of Cars : " << count_car + count_non_car << "\nPaying car : " << count_car << "\nNon paying car : " << count_non_car << "\nTotal Money collected : " << money << endl;
    }
};

int main()
{
    cout << "______________ A N K I T   R A W A T _____________________" << endl;
    cout << "\nName : Ankit Rawat\nSection : G\nST ID : 20011670 \n\n";
    int choice;
    tollbooth t;
    t.init();
    cout << "Press 1 if car is PAYING CAR\nPress 2 if car is NON-PAying CAR\nPress 0 to exit\n";
    cout << "Enter the Car type : ";
    cin >> choice;
    while (choice)
    {
        if (choice == 1)
        {
            t.payCar();
        }
        else if (choice == 2)
        {
            t.nonPayCar();
        }
        cout << "Enter the car type : ";
        cin >> choice;
    }
    t.display();
    return 0;
}