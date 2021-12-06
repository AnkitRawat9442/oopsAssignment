// 4.	Write a program to right rotate and left rotate to an array.
#include <iostream>
using namespace std;
#include <vector>

void rotate_left(vector<int> &vec, int d)
{
    if (d == 0)
        return;
    for (int i = 0; i < d; i++)
    {
        vec.push_back(vec[0]);
        vec.erase(vec.begin());
    }
}
void rotate_right(vector<int> &vec, int d)
{
    rotate_left(vec, vec.size() - d);
}

int main()
{
    cout << "______________ A N K I T   R A W A T _____________________" << endl;
    cout << "\nName : Ankit Rawat\nSection : G\nST ID : 20011670 \n\n";
    int val, n, d;
    cout << "Enter the size of the array : ";
    cin >> n;
    vector<int> vec;
    cout << "Enter the element : ";
    for (int i = 0; i < n; i++)
    {   cin >> val;
        vec.push_back(val);
    }
    cout << "rotated by : ";
    cin >> d;
    cout << "Original array : ";
    for (int i = 0; i < n; i++)
        cout << vec[i] << " ";
    cout << endl;
    rotate_left(vec, d % n);
    cout << "\nAfter left rotation by " << d << " ==> ";
    for (int i = 0; i < vec.size(); i++)
       cout << vec[i] << " ";
    rotate_right(vec, d % n);
    cout << "\nAfter right rotation by " << d << " ==> ";
    for (int i = 0; i < vec.size(); i++)
        cout << vec[i] << " ";
    return 0;
}



