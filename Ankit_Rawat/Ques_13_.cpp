/**** 13.	Create a class TIME, having data members hr, min, sec of integer type and member
            functions entertime(), addtime(), display(). Write a C++ program to enter two times
            and add them and display the added time in 12 hour format.
***/

#include <iostream>
using namespace std;

class Time
{
    int hr, min, sec;

public:
    Time()
    {
        hr = min = sec = 0;
    }
    void enter_time()
    {   
        cout<<"Enter the time \n";
        cout << "hr : ";
        cin >> hr;
        cout << "min : ";
        cin >> min;
        cout << "sec : ";
        cin >> sec;
    }

    
    void add_time(Time t1, Time t2)
    {
        int carry = 0;
        sec = t1.sec + t2.sec;
        if (sec >= 60)
        {
            carry = (sec) / 60;
            sec = (sec) % 60;
        }
        min = t1.min + t2.min + carry;
        if (min >= 60)
        {
            carry = (min) / 60;
            min = (min) % 60;
        }
        hr = t1.hr + t2.hr + carry;
        if (hr >= 12)
        {
            hr = (hr) % 12;
        }
    }
    void display()
    {

        cout << "TIme is : " << hr << " : " << min << " : " << sec << endl;
    }
};
int main()
{
    cout << "______________ A N K I T   R A W A T _____________________" << endl;
    cout << "\nName : Ankit Rawat\nSection : G\nST ID : 20011670 \n\n";
    Time t1, t2, res;
    t1.enter_time();
    t2.enter_time();
    cout<<"Time T1 : ";
    t1.display();
    cout<<"Time T2 : ";
    t2.display();
    cout<<"After the Adding Time\n";
    res.add_time(t1, t2);
    res.display();
    return 0;
}
