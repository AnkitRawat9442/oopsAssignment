//  17.	Write a C++ program to show the overloading of prefix and postfix increment operators.

#include <bits/stdc++.h>
using namespace std;
 class Integer 
{
    int i;
 public:
    Integer(int i = 0)    // Parameterised constructor
    {
        this->i = i;
    }
    Integer operator++()   // Overloading the prefix operator
    {
        Integer temp;
        temp.i = ++i;
        return temp;
    }
    Integer operator++(int)   // Overloading the postfix operator
    {
        Integer temp;
        temp.i = i++;
        return temp;
    }
    void display()     // Function to display the value of i
    {
        cout << "i = " << i << endl;
    }
};
int main()
{
     cout << "______________ A N K I T   R A W A T _____________________" << endl;
    cout << "\nName : Ankit Rawat\nSection : G\nST ID : 20011670 \n\n";
    Integer i1(3) , i3(5);
    cout << "Before increment: ";
    i1.display();
    Integer i2 = ++i1;
    cout << "After pre increment: ";
    i2.display();
    cout << "Before increment: ";
    i3.display();
    Integer i4 = i3++;
    cout << "After post increment: ";
    i4.display();

    return 0 ;
}