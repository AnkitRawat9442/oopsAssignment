

//   3.	Write a C++ program to Linearly search an element in a given array by using Recursion.



#include <iostream>
using namespace std;

int linear_search(int *a, int key,int cur_index ,  int size)
{
    if (a >= a + (size - 1))
        return -1;
    else if (*a == key)
    {  
       return cur_index;
    }
    else
    return linear_search((a + 1), key, cur_index+1 ,  size);
}









int main()
{
     cout << "\n______________ A N K I T   R A W A T _____________________" << endl;
    cout << "\nName : Ankit Rawat\nSection : G\nST ID : 20011670 \n\n";
    int n, key ;
    cout<<"Enter the size of the array : ";
    cin>> n;
    int ar[n] ;
    cout<<"Enter the element : ";
    for(int i =0 ; i<n  ; i++)
     cin>>ar[i];
     cout<<"Enter the key to search : ";
     cin>> key;

     if(linear_search(ar, key , 0 , n)>=0)
    printf("The Key val is at index : %d ", linear_search(ar, key , 0 , n)); 
    else
     printf("The Key not found ");
    return 0;
}
