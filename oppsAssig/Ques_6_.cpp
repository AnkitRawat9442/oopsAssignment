// 6.	Write a C++ program to reverse digit of a number using pointer.
#include <iostream>
using namespace std;

//  Find the reverse digits of a number

void reverseNumber(int *num)
{
    int rem = 0;
    int *res;
    *res = *num;
    *num = 0;
    while (*res > 0)
    {
        rem = (*res) % 10;
        *num = (*num) * 10 + rem;
        *res = (*res) / 10;
    }
}

int main()
{
    cout << "______________ A N K I T   R A W A T _____________________" << endl;
    cout << "\nName : Ankit Rawat\nSection : G\nST ID : 20011670 \n\n";
    int n;
    cout << "Enter the number : ";
    cin >> n;
    cout << "original Number : " << n << endl;
    reverseNumber(&n);
    cout << "Reverse Number  : " << n;

    return 0;
}
