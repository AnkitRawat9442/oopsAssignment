// 14.	Write a C++ program to find the larger object using friend function.

#include<iostream>
using namespace std;

class My_class
{
    int val;
    public:
    My_class(int x)
    {
        val = x;
    }
    friend int max(My_class a , My_class b);
};

int max(My_class a , My_class b)
{
    if(a.val > b .val)
      return a.val;
    else 
      return b.val;
}

int main ()
{
    cout << "\n______________ A N K I T   R A W A T _____________________" << endl;
    cout << "\nName : Ankit Rawat\nSection : G\nST ID : 20011670 \n\n";
    My_class obj1(5) , obj2(9);
    cout<<"Larger object is "<<max(obj1 , obj2)<<endl;
    return 0 ;

}