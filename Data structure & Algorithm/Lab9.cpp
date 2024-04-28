#include <bits/stdc++.h>
#include <cstdio>
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
void QuickSort(T A[], int n);
template <typename T>
void MergeSort(T A[], int n);
template <typename T>
bool isMyArrayActuallySorted(T A[], int n);
template <typename T>
int linearSearch(T A[], int n, T x);
template <typename T>
int binarySearch(T A[], int n, T x);

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

    Nhap(A, n);
    cout << "QuickSort started..." << endl;
    start = clock();
    QuickSort(A, n);
    end = clock();
    time = (end - start) / CLOCKS_PER_SEC;
    cout << "QuickSort: " << time << " seconds." << endl;
    isMyArrayActuallySorted(A, n);

    Nhap(A, n);
    cout << "MergeSort started..." << endl;
    start = clock();
    MergeSort(A, n);
    end = clock();
    time = (end - start) / CLOCKS_PER_SEC;
    cout << "MergeSort: " << time << " seconds." << endl;
    isMyArrayActuallySorted(A, n);

    cout << "Linear search started... " << endl;
    start = clock();
    cout << linearSearch(A, n, 168) << endl;
    end = clock();
    time = (end - start) / CLOCKS_PER_SEC;
    cout << "Linear search: " << time << " seconds." << endl;

    cout << "Binary search started... " << endl;
    start = clock();
    cout << binarySearch(A, n, 168) << endl;
    end = clock();
    time = (end - start) / CLOCKS_PER_SEC;
    cout << "Binary search: " << time << " seconds." << endl;

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
void QuickSort(T A[], int n){
  if (n > 1) {
    T pivot = A[n/2];
    T *L = A;
    T *R = A + n - 1;
    while (L <= R) {
      while (*L < pivot) {
        L++;
      }
      while (*R > pivot) {
        R--;
      }
      if (L <= R) {
        swap(*L, *R);
        L++;
        R--;
      }
    }
    QuickSort(A, R - A + 1);
    QuickSort(L, A + n - L);
  }
}

template <typename T>
void MergeSort(T A[], int n){
  if (n > 1) {
    int mid = n / 2;
    T *L = A;
    T *R = A + mid;
    int nL = mid;
    int nR = n - mid;
    MergeSort(L, nL);
    MergeSort(R, nR);
    // merge()
    int i = 0, j = 0, k = 0;
    while (i < nL && j < nR) {
      if (L[i] < R[j]) {
        A[k++] = L[i++];
      } else {
        A[k++] = R[j++];
      }
    }
    while (i < nL) {
      A[k++] = L[i++];
    }
    while (j < nR) {
      A[k++] = R[j++];
    }
  }
}

template <typename T>
bool isMyArrayActuallySorted(T A[], int n){
    for (int i = 0; i < n-1; i++) {
      if (A[i+1] < A[i]) {
        cout << "Array is not sorted properly, please check used algorithm" << endl;
        return false;
      }
    }
    return true;
}

template <typename T>
int linearSearch(T A[], int n, T x){
    for(int i = 0; i < n; i++){
        if(A[i] == x){
            return i;
        }
    }
    return -1;
}

template <typename T>
int binarySearch(T A[], int n, T x){
    int left = 0, right = n - 1;
    while(left <= right){
        int mid = (left + right) / 2;
        if(A[mid] == x){
            return mid;
        }
        if(A[mid] < x){
            left = mid + 1;
        }else{
            right = mid - 1;
        }
    }
    return -1;
}
