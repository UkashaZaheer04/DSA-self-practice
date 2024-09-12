 #include <iostream>
using namespace std;

int main() {
    int rows, columns;

    // Step 1: Take user input for the number of rows and columns
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> columns;

    // Step 2: Dynamically allocate memory for 2D array
    int** arr = new int*[rows];  // Allocate an array of pointers to int
    for (int i = 0; i < rows; i++) {
        arr[i] = new int[columns];  // Allocate an array of ints for each row
    }

    // Step 3: Take input for each element
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cout << "Enter elements at [" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }

    // Step 4: Display the 2D array
    cout << "The dynamically allocated 2D array is:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cout << arr[i][j] << " ";  // Correct access for elements
        }
        cout << endl;  // New line after each row
    }

    // Step 5: Deallocate memory
    for (int i = 0; i < rows; i++) {
        delete[] arr[i];  // Deallocate each row
    }
    delete[] arr;  // Deallocate array of pointers

    return 0;
}
