//4.	Write a program to right rotate and left rotate to an array.
#include<iostream>
using namespace std;

void swap_( int &a , int &b)
{
    a = a + b;
    b = a -b;
    a = a -b;
}

void left_Raotate (int *ar , int size )
{
    for(int i =0 ; i<size/2 ; i++)
    {
        int a = *(ar+i);
      *(ar+i) =  *(ar + size -1 - i ) ;
      *(ar + size -1 + i ) = a;

        
    }
}

int main()
{
    int n;
    cout<<"Enter the size of the array : ";
    cin>> n;
    int ar[n] ;
    cout<<"Enter the element : ";
    for(int i =0 ; i<n  ; i++)
     cin>>ar[i];
     for(int i =0 ; i<n  ; i++)
     cout<<ar[i]<<" "; 
    left_Raotate(ar , n);
     cout<<"\nAfter left rotate \n";
      for(int i =0 ; i<n  ; i++)
     cout<<ar[i]<<" ";

    
    return 0;
}