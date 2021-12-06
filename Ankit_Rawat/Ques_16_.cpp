/*** 16.	Create a class of Employee, in that considers their names, age, and employee code.
    In the same class, create a - (subtract) overloading operator to find the age gap of two employees
Example: [Employee is a Class in C++]
Employee e1("Nitin", 30, "E001");
Employee e2("Amit", 25, "E002");
int diff = e1 – e2
**/

#include <iostream>
using namespace std;

class Employee
{
    string name, code;
    int age;
public:
    Employee() {}
    Employee(string name, int age, string code)
    {
        this->name = name;
        this->code = code;
        this->age = age;
    }
    int operator-(Employee e)
    {
        return age - (e.age);
    }
    void show()
    {
        cout << "Name :" << name << " Age : " << age << " Code : " << code << endl;
    }
};

int main()
{
    cout << "______________ A N K I T   R A W A T _____________________" << endl;
    cout << "\nName : Ankit Rawat\nSection : G\nST ID : 20011670 \n\n";
    Employee e1("Ankit", 21, "AR01"), e2("Amit", 19, "Ar201");
    e1.show();
    e2.show();
    int age_gap = e1 - e2;
    cout << "Age gap : " << age_gap;
    return 0;
}