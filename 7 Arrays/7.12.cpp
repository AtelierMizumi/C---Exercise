#include <iostream>
using namespace std;

const int MAX_ROWS = 100;
const int MAX_COLS = 100;

int main() {
    int arr[MAX_ROWS][MAX_COLS];
    int rows, cols;

    cout << "Enter the number of rows: ";
    cin >> rows;

    cout << "Enter the number of columns: ";
    cin >> cols;

    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Enter element at position (" << i << ", " << j << "): ";
            cin >> arr[i][j];
        }
    }

    int chosenRow, chosenCol;
    cout << "Enter the row number to calculate its sum: ";
    cin >> chosenRow;

    int rowSum = 0;
    for (int j = 0; j < cols; j++) {
        rowSum += arr[chosenRow][j];
    }
    cout << "Sum of row " << chosenRow << ": " << rowSum << endl;

    cout << "Enter the column number to calculate its sum: ";
    cin >> chosenCol;

    int colSum = 0;
    for (int i = 0; i < rows; i++) {
        colSum += arr[i][chosenCol];
    }
    cout << "Sum of column " << chosenCol << ": " << colSum << endl;

    int largest = arr[chosenRow][0];
    int smallest = arr[chosenRow][0];

    for (int j = 1; j < cols; j++) {
        if (arr[chosenRow][j] > largest) {
            largest = arr[chosenRow][j];
        }
        if (arr[chosenRow][j] < smallest) {
            smallest = arr[chosenRow][j];
        }
    }

    cout << "Largest element in row " << chosenRow << ": " << largest << endl;
    cout << "Smallest element in row " << chosenRow << ": " << smallest << endl;

    largest = arr[0][chosenCol];
    smallest = arr[0][chosenCol];

    for (int i = 1; i < rows; i++) {
        if (arr[i][chosenCol] > largest) {
            largest = arr[i][chosenCol];
        }
        if (arr[i][chosenCol] < smallest) {
            smallest = arr[i][chosenCol];
        }
    }

    cout << "Largest element in column " << chosenCol << ": " << largest << endl;
    cout << "Smallest element in column " << chosenCol << ": " << smallest << endl;

    return 0;
}
