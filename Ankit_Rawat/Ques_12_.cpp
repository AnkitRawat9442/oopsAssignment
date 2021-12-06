/***12.	Create a class named Volume and its constructors with different number of arguments.
 * Volume(float side)- Volume of cube
Volume(float r, float h) )- Volume of cylinder
Volume(float len, float br, float hgt) - Volume of cuboid.
Write a program to demonstrate the constructor overloading by using all three constructors of
Volume class as well as calculate the volume.
*****/

#include <iostream>
using namespace std;
class Volume
{
    float vol;
public:
    Volume(float side) //  Volume of cube
    {
        vol = side * side * side;
    }
    Volume(float r, float h) // Volume of cylinder
    {
        vol = 3.14 * r * r * h;
    }
    Volume(float len, float br, float hgt) // Volume of cuboid.
    {
        vol = len * br * hgt;
    }

    float getVolume()
    {
        return vol;
    }
};

int main()
{
    cout << "______________ A N K I T   R A W A T _____________________" << endl;
    cout << "\nName : Ankit Rawat\nSection : G\nST ID : 20011670 \n\n";
    Volume cube(5);
    cout << "Volume of cube  : " << cube.getVolume() << endl;
    Volume cylinder(5, 8);
    cout << "Volume of Cylinder  : " << cylinder.getVolume() << endl;
    Volume cuboid(5, 8, 12);
    cout << "Volume of cuboid  : " << cuboid.getVolume() << endl;
    return 0;
}
