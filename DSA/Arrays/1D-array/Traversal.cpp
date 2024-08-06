#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of elements in array :";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << "The number at index " << i << " is :" << arr[i] << " " << endl;
    }
}