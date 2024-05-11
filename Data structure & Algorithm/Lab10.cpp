#include <bits/stdc++.h>
using namespace std;

// only working with int array but
// trying out template functions to fit more data types
void Nhap(int A[], int n);
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
void QuickSort_RecursiveLeftRight(T A[], int L, int R);
template <typename T>
void MergeSort_RecursiveLeftRight(T A[], int L, int R);
template <typename T>
void mergeLeftRight(T A[], int L, int M, int R);

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
    QuickSort_RecursiveLeftRight(A, 0, 500000);
    end = clock();
    time = (end - start) / CLOCKS_PER_SEC;
    cout << "QuickSort: " << time << " seconds." << endl;
    isMyArrayActuallySorted(A, n);

    Nhap(A, n);
    cout << "MergeSort started..." << endl;
    start = clock();
    MergeSort_RecursiveLeftRight(A, 0, 500000);
    end = clock();
    time = (end - start) / CLOCKS_PER_SEC;
    cout << "MergeSort: " << time << " seconds." << endl;
    isMyArrayActuallySorted(A, n);
    
    return 0;
}

void Nhap(int A[], int n) {
    random_device rd; // Initialize random device to obtain seed
    mt19937 gen(rd()); // Initialize Mersenne Twister PRNG with seed from random device
    uniform_int_distribution<> dis(1, 1000000); // Initialize uniform distribution from 1 to 1000000
    for (int i = 0; i < n; i++) {
        A[i] = dis(gen); // Generate random number from uniform distribution
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
// mot dang quicksort co tham so la do dai cua mang
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
void QuickSort_RecursiveLeftRight(T A[], int L, int R){
  // Neu mang >= 1pt thi thuc hien: (dieu kien dung de quy)
  if (L <= R){
    // B1. tinh trung binh pivot
    T pivot = A[(L+R)/2];
    // B2. Bien up chay tu trai de tim PT>pivot | Bien down chay tu phai de tim PT < pivot
    int up = L, down = R;
    // B3. Trong qua trinh tim neu co up>= pivot
    // (co pt > pivot va phan tu nho hon pivot thi tien hanh swap 2 phan tu A[up] va B[down] va up++, down--
    // B4. Quay lai buoc 2 cho den khi up > down--
    while (up <= down){
      while (A[up] < pivot)
        up++;
      while (A[down] > pivot)
        down--;
      if (up <= down) {
        swap(A[up], A[down]);
        up++;
        down--;
      }
    };
    // B5. Goi de quy QuickSort cho 2 mang con
    QuickSort_RecursiveLeftRight(A, L, down);
    QuickSort_RecursiveLeftRight(A, up, R);
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
void MergeSort_RecursiveLeftRight(T A[], int L, int R)
{
  if (L<R)
  {
    int M = (L+R)/2;
    MergeSort_RecursiveLeftRight(A, L, M);
    MergeSort_RecursiveLeftRight(A, M+1, R);
    mergeLeftRight(A, L, M, R);
  }
}

template <typename T>
void mergeLeftRight(T A[], int L, int M, int R)
{
  if (L == R) return;
  int n1 = M - L + 1;
  int n2 = R - M;
  T *L1 = new T[n1];
  T *L2 = new T[n2];
  for (int i = 0; i < n1; i++) {
    L1[i] = A[L + i];
  }
  for (int i = 0; i < n2; i++) {
    L2[i] = A[M + 1 + i];
  }
  int i = 0, j = 0, k = L;
  while (i < n1 && j < n2) {
    if (L1[i] <= L2[j]) {
      A[k++] = L1[i++];
    } else {
      A[k++] = L2[j++];
    }
  }
  while (i < n1) {
    A[k++] = L1[i++];
  }
  while (j < n2) {
    A[k++] = L2[j++];
  }
  delete[] L1;
  delete[] L2;
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
