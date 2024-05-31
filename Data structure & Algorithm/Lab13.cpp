#include <iostream>
using namespace std;

void printArray(int arr[], int n) {
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Function to heapify a subtree rooted at index i
void heapify(int arr[], int n, int i) {
    int largest = i; // Initialize largest as root
    int left = 2 * i + 1; // left = 2*i + 1
    int right = 2 * i + 2; // right = 2*i + 2

    // If left child is larger than root
    if (left < n && arr[left] > arr[largest])
        largest = left;

    // If right child is larger than largest so far
    if (right < n && arr[right] > arr[largest])
        largest = right;

    // If largest is not root
    if (largest != i) {
        swap(arr[i], arr[largest]);

        heapify(arr, n, largest);
    }
}

void buildMaxHeap(int arr[], int n) {
    // Build heap (rearrange array)
    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify(arr, n, i);
    }
}

void heapSort(int arr[], int n) {
    // Build a max heap from the input data
    buildMaxHeap(arr, n);

    // One by one extract elements from heap
    for (int i = n - 1; i >= 0; i--) {
        // Move current root to end
        swap(arr[0], arr[i]);

        // call max heapify on the reduced heap
        heapify(arr, i, 0);
    }
}

void deleteRoot(int arr[], int& n) {
    if (n <= 0) {
        cout << "Heap is empty, cannot delete root." << endl;
        return;
    }
    arr[0] = arr[n - 1];
    n--;
    heapify(arr, n, 0);
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int A[n];
    cout << "Enter " << n << " integers: ";
    for (int i = 0; i < n; ++i) {
        cin >> A[i];
    }

    cout << "Array before heapify: ";
    printArray(A, n);
    buildMaxHeap(A, n);
    cout << "Current state of Heap: ";
    printArray(A, n);
    heapSort(A, n);
    cout << "Array after heap sort: ";
    printArray(A, n);
    deleteRoot(A, n);
    cout << "Array after deleting root: ";
    printArray(A, n);
    cout << "Sorted array after deleting root: ";
    heapSort(A, n);
    printArray(A, n);

    return 0;
}
