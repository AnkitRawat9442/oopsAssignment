// 5.	Write a C++ program to perform the following operations on string without using library function:
//       (i) Find the length of a string. (ii) Find the reverse of a string
#include <iostream>
using namespace std;
// (i) Find the length of a string.
int lenghtofString(string s)
{
    int *size = new (int);
    *size = 0;
    while (s[*size] != '\0')
    {
        (*size)++;
    }
    return *size;
}

// (ii) Find the reverse of a string
void reverseString(string &s)
{
    int i = 0, len = lenghtofString(s);
    for (int i = 0; i < len / 2; i++)
    {
        char temp = s[i];
        s[i] = s[len - 1 - i];
        s[len - 1 - i] = temp;
    }
}

int main()
{
    cout << "______________ A N K I T   R A W A T _____________________" << endl;
    cout << "\nName : Ankit Rawat\nSection : G\nST ID : 20011670 \n";
    string s;
    cout << "\nEnter the string : ";
    cin >> s;
    cout << "original String : " << s << endl;
    cout << "Length of String : " << lenghtofString(s) << endl;
    reverseString(s);
    cout << "Reverse String : " << s;

    return 0;
}
