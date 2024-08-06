#include <iostream>
using namespace std;
int main()
{
    // Method 1:
    // Accessing elements of the array
    int arr[4] = {1, 2, 3, 4};
    cout << arr[3];

    //    Method 2 :
    int arr[] = {1, 2, 3, 4, 5};
    cout << arr[4];

    //  Method 3 :
    // Taking input from user
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i <= n - 1; i++)
    {
        cin >> arr[i];
    }
    // Garbage Value :
    int arr[4] = {1, 2, 3};
    for (int i = 0; i < 4; i++)
    {
        cout << arr[i] << " ";
    }
    //  method 4
    int arr[4] = {1, 2, 3, 4};
    cout << arr[0];
    cout << arr[1];
    cout << arr[2];
    cout << arr[3];
}
// Array Operations
/*
1- Traversal  = visiting every element once in an array
2- Insertion  = include some other element in an array (at beginning , at the end and at the given index)
3- Deletion   = Delete a desire element and re-arrang it again (at beginning , at the end and at the given index)
4- Searching  = Search an element at any index
5- Sorting    = Descending or Ascending
*/
