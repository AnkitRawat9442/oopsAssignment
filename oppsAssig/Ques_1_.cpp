/*** 1.	Write a C++ program to calculate the size of integer, unsigned integer, signed integer, 
        character, signed char, unsigned char, float, double.
**/

#include<iostream>
using namespace std;

int main()
{
     cout << "\n______________ A N K I T   R A W A T _____________________" << endl;
    cout << "\nName : Ankit Rawat\nSection : G\nST ID : 20011670 \n\n";
    cout<<"Size of Integer            : "<< sizeof(int)<<" bytes"<<endl;
    cout<<"Size of Unsigned Integer   : "<< sizeof(unsigned int)<<" bytes"<<endl;
    cout<<"Size of signed Integer     : "<<sizeof(signed int)<<" bytes"<<endl;
    cout<<"Size of Character          : "<< sizeof(char)<<" byte"<<endl;
    cout<<"Size of Unsigned character : "<< sizeof(unsigned char)<<" byte"<<endl;
    cout<<"Size of signed character   : "<<sizeof(signed char)<<" byte"<<endl;
    cout<<"Size of Float              : "<< sizeof(float)<<" bytes"<<endl;
    cout<<"Size of Double             : "<< sizeof(double)<<" bytes"<<endl;
   return 0;
}