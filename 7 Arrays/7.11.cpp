#include <iostream>
using namespace std;

const int MAX_ROWS = 100;
const int MAX_COLS = 100;

int main() {
    int rows, cols;
    int arr[MAX_ROWS][MAX_COLS];

    // Get the number of rows and columns from the user
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    // Enter array elements from the keyboard
    cout << "Enter the array elements:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Enter element at position (" << i << ", " << j << "): ";
            cin >> arr[i][j];
        }
    }

    // Calculate and display the sum of all elements in each row
    cout << "Sum of elements in each row:\n";
    for (int i = 0; i < rows; i++) {
        int rowSum = 0;
        for (int j = 0; j < cols; j++) {
            rowSum += arr[i][j];
        }
        cout << "Row " << i << ": " << rowSum << endl;
    }

    // Calculate and display the sum of all elements in each column
    cout << "Sum of elements in each column:\n";
    for (int j = 0; j < cols; j++) {
        int colSum = 0;
        for (int i = 0; i < rows; i++) {
            colSum += arr[i][j];
        }
        cout << "Column " << j << ": " << colSum << endl;
    }

    return 0;
}

