#include<iostream>
using namespace std;
int main ()
{
    int size;
    cout<<"Enter size of array ";
    cin>>size ;
    int* arr=new int [size];
    for(int i=0;i<size;i++)
    {
        cout<<"Enter element ["<<i<<"] of array ";
        cin>>arr[i];
    }
     cout<<" The  array is : ";
    for(int i=0;i<size;i++)
        {
            cout<<arr[i]<< " ";
            
        }

  return 0;
}