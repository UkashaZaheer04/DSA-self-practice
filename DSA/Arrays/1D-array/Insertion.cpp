#include <iostream>
using namespace std;
int main()
{
    //  insert element at first index
    /* int n;
    cout<<"Enter size of array : ";
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++)
    {
       cout<<"Enter elements in array :";
       cin>>arr[i];
    }
     int x;
     cout<<"Enter the element you want to add in first index :";
     cin>>x;
     for (int i=n;i>0;i--)
     {
       arr[i]=arr[i-1];
     }
      arr[0]= x;
      n++;
      cout<<"The updated array is :"<<endl;
      for (int i=0;i<n;i++)
      {
       cout<<arr[i];
      } */
    //  insertion at last index
    /* int n;
   cout<<"Enter size of array : ";
   cin>>n;

   int arr[n+1];
   for (int i=0;i<n;i++)
   {
      cout<<"Enter elements in array :";
      cin>>arr[i];
   }
    int x;
    cout<<"Enter the element you want to add in last  index :";
    cin>>x;
    arr[n]=x;
      cout<<"The update array is ";
    for(int i=0;i<n+1;i++)
    {

       cout<<arr[i];
    } */
    //  insertion at specific index
    int n;
    cout << "Enter size of array : ";
    cin >> n;
    int arr[n + 1];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter elements in array ";
        cin >> arr[i];
    }
    int index;
    cout << "Enter index in which you want to add value : ";
    cin >> index;
    int x;
    cout << "Enter the element you want to add in array : ";
    cin >> x;
    for (int i = n; i > index; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[index] = x;
    cout << "The updated array is : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
}