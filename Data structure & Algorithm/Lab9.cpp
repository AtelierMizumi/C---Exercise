#include <bits/stdc++.h>
#include <cstdio>
#include <cwchar>
using namespace std;

// only working with int array but
// trying out template functions to fit more data types
template <typename T>
void Nhap(T A[], int n);
template <typename T>
void BubbleSort(T A[], int n);
template <typename T>
void SelectionSort(T A[], int n);
template <typename T>
void InsertionSort(T A[], int n);
template <typename T>
bool isMyArrayActuallySorted(T A[], int n);

int main(){

    double start, end, time;
    int A[500000];
    int n = 50000;

    Nhap(A, n);
    cout << "BubbleSort started..." << endl;
    start = clock();
    BubbleSort(A, n);
    end = clock();
    time = (end - start) / CLOCKS_PER_SEC;
    cout << "BubbleSort: " << time << " seconds." << endl;
    isMyArrayActuallySorted(A, n);

    Nhap(A, n);
    cout << "SelectionSort started..." << endl;
    start = clock();
    SelectionSort(A, n);
    end = clock();
    time = (end - start) / CLOCKS_PER_SEC;
    cout << "SelectionSort: " << time << " seconds." << endl;
    isMyArrayActuallySorted(A, n);

    Nhap(A, n);
    cout << "InsertionSort started..." << endl;
    start = clock();
    InsertionSort(A, n);
    end = clock();
    time = (end - start) / CLOCKS_PER_SEC;
    cout << "InsertionSort: " << time << " seconds." << endl;
    isMyArrayActuallySorted(A, n);
    end = clock();

    return 0;
}

template <typename T>
void Nhap(T A[], int n){
  srand(time(NULL));
  // random data generator based on data type of the array
  if (is_same<T, int>::value) {
    for (int i = 0; i < n; i++) {
      A[i] = rand() % 10000;
    }
  } else if (is_same<T, double>::value) {
    for (int i = 0; i < n; i++) {
      A[i] = rand() % 10000 + 0.5;
    }
  } else if (is_same<T, char>::value) {
    for (int i = 0; i < n; i++) {
      A[i] = rand() % 26 + 65;
    }
  } else if (is_same<T, float>::value) {
    for (int i = 0; i < n; i++) {
      A[i] = rand() % 10000 + 0.5;
    }
  } else if (is_same<T, long>::value) {
    for (int i = 0; i < n; i++) {
      A[i] = rand() % 10000;
    }
  } else if (is_same<T, long long>::value) {
    for (int i = 0; i < n; i++) {
      A[i] = rand() % 10000;
    }
  } else if (is_same<T, short>::value) {
    for (int i = 0; i < n; i++) {
      A[i] = rand() % 10000;
    }
  } else if (is_same<T, unsigned>::value) {
    for (int i = 0; i < n; i++) {
      A[i] = rand() % 10000;
    }
  } else if (is_same<T, unsigned long>::value) {
    for (int i = 0; i < n; i++) {
      A[i] = rand() % 10000;
    }
  } else if (is_same<T, unsigned long long>::value) {
    for (int i = 0; i < n; i++) {
      A[i] = rand() % 10000;
    }
  } else {
    cout << "Data type not supported" << endl;
  }
}

template <typename T>
void BubbleSort(T A[], int n){
  for(int i = 0; i < n; i++){
    for(int j = n - 1; j>i; j--){
      if(A[j] < A[j-1]){
        swap(A[j], A[j-1]);
      }
    }
  }
}

template <typename T>
void SelectionSort(T A[], int n){
  int i, j, min_idx;
  for (i = 0; i < n-1; i++) {
    min_idx = i;
    for (j = i; j < n; j++) {
      if (A[j] < A[min_idx]){
        min_idx = j;
      }
    }
    swap(A[i], A[min_idx]);
  }
}

template <typename T>
void InsertionSort(T A[], int n){
  int i, j, x;
  for(i = 1; i < n; i++){
    x = A[i];
    j=i;
    while(j>0 && A[j-1] > x){
      A[j] = A[j-1];
      j--;
    }
    A[j] = x;
  }
}

template <typename T>
bool isMyArrayActuallySorted(T A[], int n){
  for (int i = 0; i < n; i++) {
   if (A[i-1] > A[i])
     return false;
  }
  return true;
}

template <typename T>
int BinarySearch(T A[], int n, T key){
  int low, high, mid;
  low = 0;
  high = n-1;
  while(low <= high){
    mid = (low + high) / 2;
    if(key == A[mid]){
      return mid;
    } else if(key < A[mid]){
      high = mid - 1;
    } else {
      low = mid + 1;
    }
  }
  return -1;
}

template <typename T>
int RecursiveBinarySearch(T A[], int low, int high, T key){
  int mid;
  if(low <= high){
    mid = (low + high) / 2;
    if(key == A[mid]){
      return mid;
    } else if(key < A[mid]){
      return RecursiveBinarySearch(A, low, mid-1, key);
    } else {
      return RecursiveBinarySearch(A, mid+1, high, key);
    }
  }
  return -1;
}
