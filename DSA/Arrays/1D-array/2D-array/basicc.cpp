#include <iostream>
using namespace std;
int main()
{
    int rows;
    cout << "Enter number of  rows";
    cin >> rows;

    int columns;
    cout << "Enternumber of  columns";
    cin >> columns;
    int arr[rows][columns];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << "Enter elements at [" << i << "][" << j << "] =";
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << arr[i] << " " << [j];
        }
        cout << endl;
    }
    return 0;
}