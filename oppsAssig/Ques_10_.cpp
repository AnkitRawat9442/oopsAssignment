// 10.	Write a C++ program to count the total number of objects of a class by using the static data member
//      and static member function.

#include <iostream>
using namespace std;

class My_class
{
    static int objcount;
    int val;

public:
    My_class(int x)
    {
        val = x;
        objcount++;
    }

    static void numberofObject()
    {
        cout << "Number of Object : " << objcount<<endl;
    }
};
int My_class::objcount;
int main()
{
    cout << "______________ A N K I T   R A W A T _____________________" << endl;
    cout << "\nName : Ankit Rawat\nSection : G\nST ID : 20011670 \n\n";
    My_class obj1(1), obj2(2), obj3(3), obj4(4);
    My_class::numberofObject();
    return 0;
}