#include <iostream>
using namespace std;
int main()
{
    // deletion at first index
    /* int n ;
    cout<<"Enter the size of array :";
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++)
    {
       cout<<"Enter elements in array :";
       cin>>arr[i];
    }
    for (int i =0;i<n-1;i++)
    {
        arr[i]=arr[i+1];
    }
    n--;
    cout<<"After deletion of first element array is :"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    return 0; */
    // deletion at last index
    int n;
    cout << "Enter the size of array :";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter elements in array :";
        cin >> arr[i];
    }

    cout << "After deletion of last  element array is :" << endl;
    for (int i = 0; i < n - 1; i++)
    {
        cout << arr[i];
    }
    return 0;
}