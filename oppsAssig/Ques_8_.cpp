// 8.	Create a class student and enter details of one student and print those details.
//      Details are name, rollno, marks in 3 subjects.

#include <iostream>
using namespace std;

class student
{
    string name;
    char section;
    int roll_no;
    int marks[3];

public:
    void getdetail()
    {
        cout << "Enter the deatil of the student \n";
        cout << "Enter the name : ";
        getline(cin, name);
        cout << "Enter the section : ";
        cin >> section;
        cout << "Enter the roll_no : ";
        cin >> roll_no;
        cout << "enter the marks in three subject : ";
        cin >> marks[0] >> marks[1] >> marks[2];
    }
    void putdata()
    {
        cout << "\nDeatil of the student \n";
        cout << "Name : " << name << "\nSection : " << section << "\nRoll.No : " << roll_no;
        cout << "\nmarks : \nM! -> " << marks[0] << "\nM2 -> " << marks[1] << "\nM3 -> " << marks[2];
    }
};
int main()
{
    cout << "______________ A N K I T   R A W A T _____________________" << endl;
    cout << "\nName : Ankit Rawat\nSection : G\nST ID : 20011670 \n\n";
    student s;
    s.getdetail();
    s.putdata();
    return 0;
}
