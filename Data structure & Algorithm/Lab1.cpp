#include <algorithm>
#include <iostream>
#define MAX 10000
using namespace std;

//

void insertArray(int A[], int n);
void printArray(int A[], int n);
int sumArray(int A[], int n);
int oddCount(int A[], int n);
double averageEven(int A[], int n);
void printfromXtoY(int A[], int n, int x, int y);
int findValueX(int x, int A[], int n);
void overwriteXatPositionP(int x, int p, int A[], int *n);
void deleteValueAtPositionP(int p, int A[], int *n);

int main(){
    
    int n = 5;
    int A[MAX];
    insertArray(A, n);

    cout << "Total: " << sumArray(A, n) << "\n";
    cout << "Number of odd value(s): " << oddCount(A, n) << "\n";
    cout << "Average between even number(s): " << averageEven(A, n) << "\n";

    cout << "Insert x and y to print: ";
    int x, y;
    cin >> x >> y;
    while (x > y || x < 0) {
        cout << "Please enter valid x and y again:";
        cin >> x >> y;
    }

    printfromXtoY(A, n, x, y);
    
    cout << "Enter a value to find: ";
    cin >> x;
    int p = findValueX(x, A, n);
    if (p!=(-1)){
        cout << "The position of found value: " << p << "\n";
    } else {
        cout << "Value not found."  << "\n";
    }
    // Assign memory address value of n to ptr
    int *ptr = &n;
    
    cout << "Enter value and position you want to overwrite: ";
    cin >> x >> p;
    overwriteXatPositionP(x, p, A, ptr);
    cout << "Array after modified: " << '\n';
    printArray(A, n);

    cout << "Enter position to delete from the array: ";
    cin >> p;
    deleteValueAtPositionP(p, A, ptr);
    cout << "Array after modified: " << '\n';
    printArray(A, n);
    

    return 0;
}


void insertArray(int A[], int n){
    for (int i = 0; i < n; i++) {
        cout << "A[" << i << "]: ";
        cin >> A[i];
    }
}

void printArray(int A[], int n){
    for (int i = 0; i < n; i++) {
        cout << "A[" << i << "]: " << A[i] << '\n';
    }
}

int sumArray(int A[], int n){
    int S=0;
    for (int i = 0; i<n; i++) {
        S=S+A[i];
    }
    return S;
}

int oddCount(int A[], int n){
    int S=0;
    for (int i=0; i < n; i++) {
        if (A[i]%2==1) {
            S=S+1;
        }
    }
    return S;
}
double averageEven(int A[], int n){
    double S = 0;
    int count=0;
    for (int i=0; i<n; i++) {
        if (A[i]%2==0){
            S=S+A[i];
            count++;
        }
    }
    S=S/(count);
    return S;
}
void printfromXtoY(int A[], int n, int x, int y){
    for (int i = x; i <= y; i++) {
        cout << "A[" << i << "]: " << A[i] << '\n';
    }
}
int findValueX(int x, int A[], int n){
    for (int i=0; i<n; i++) {
        if (A[i]==x) {
            return i;
        }
    }
    return -1;
}
void overwriteXatPositionP(int x, int p, int A[], int *n){
    A[p]=x;
}
void deleteValueAtPositionP(int p, int A[], int *n){
    int delta=0;
    int B[MAX];
    for (int i = 0; i < *n; i++) {
        B[i] = A[i];
    }
    for (int i = 0; i < *n-1; i++) {
        if (i==p) {
            delta=delta+1;
        }
        A[i]=B[i+delta];
    }

    // remove final element
    A[*n-1]=0;
}

// clone a array then paste value if = pos skip 
