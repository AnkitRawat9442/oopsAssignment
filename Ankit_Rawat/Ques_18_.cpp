//  18.	Write a C++ program to show the overloading of << and >> operators.

#include <iostream>
using namespace std;

class Complex
{
private:
    int real, img;
public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        img = i;
    }
    friend ostream &operator<<(ostream &out, const Complex &c);
    friend istream &operator>>(istream &in, Complex &c);
};

ostream &operator<<(ostream &out, const Complex &c)
{
    out << c.real;
    out << " + i" << c.img << endl;
    return out;
}

istream &operator>>(istream &in, Complex &c)
{
    cout << "Enter Real Part : ";
    in >> c.real;
    cout << "Enter Imaginary Part : ";
    in >> c.img;
    return in;
}

int main()
{
    cout << "______________ A N K I T   R A W A T _____________________" << endl;
    cout << "\nName : Ankit Rawat\nSection : G\nST ID : 20011670 \n\n";
    Complex z;
    cin >> z;
    cout << "The complex Number : ";
    cout << z;
    return 0;
}
