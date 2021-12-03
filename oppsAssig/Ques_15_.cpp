//   15.	Write a C++ program to add two complex number using operator overloading.

#include <iostream>
using namespace std;

class complex
{
    int real, img;

public:
    complex() {}       // default constructor 
    complex(int x, int y)     // parameterised constructor 
    {
        real = x;
        img = y;
    }

    complex operator+(complex z)    // operator overloading 
    {
        complex res;
        res.real = real + z.real;
        res.img = img + z.img;
        return res;
    }
    void printCm()     // printing complex number 
    {
        cout << real << " + "
             << "i" << img << endl;
    }
};

int main()
{
    cout << "______________ A N K I T   R A W A T _____________________" << endl;
    cout << "\nName : Ankit Rawat\nSection : G\nST ID : 20011670 \n\n";
    complex z1(1, 4), z2(4, 6), z3;
    z3 = z1 + z2;
    cout << "z1 = ";
    z1.printCm();
    cout << "z2 = ";
    z2.printCm();
    cout << "z3 = z1 + z2 => ";
    z3.printCm();
    return 0;
}
