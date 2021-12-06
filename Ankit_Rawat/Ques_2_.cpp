/*** 2.	Write a program in C++ to show how namespaces work. Create 2 variables and functions with same 
        name inside different namespaces and access them from the main method.   ***/

#include<iostream>
using namespace std;

namespace space1
{
   int x = 5;
   void fun()
   {
      cout<<"this is space1"<<endl;
   }
}
namespace space2
{
   int x = 5;
   void fun()
   {
      cout<<"this is space2"<<endl;
   }
}
int main ()
{
    cout << "______________ A N K I T   R A W A T _____________________" << endl;
    cout << "\nName : Ankit Rawat\nSection : G\nST ID : 20011670 \n\n";
    fun(); // ambiguity has generated between fun() of space1 and space2 
    /*** to access space1 fun() --->  space1 :: fun()
         to access space2 fun() --->  space2 :: fun()
         ***/
    return 0;
}

