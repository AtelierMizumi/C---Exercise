#include "bits/stdc++.h"
#define SIZE 100
using namespace std;

void Nhap(int A[], int n);
void Xuat(int A[], int n);
void BubbleSort(int A[], int n);
int Search(int A[], int n, int x);
int BinarySearch(int A[], int n, int x);
int BinarySearch_Recursive(int A[], int left, int right, int x);

int main(){

    int A[SIZE];void Nhap(int A[], int n);
void Xuat(int A[], int n);
void NoiBot(int A[], int n);
int Search(int A[], int n, int x);
int BinarySearch(int A[], int n, int x);

    int n = 10;
    Nhap(A, n);
    Xuat(A, n);
    cout << endl;
    BubbleSort(A, n);
    Xuat(A, n);
    cout << endl;
    cout << "Position of x=3: " << Search(A, n, 3) << endl;
    cout << "Position of x=6: " << BinarySearch_Recursive(A, 0, n - 1, 6) << endl;

    return 0;
}

void Nhap(int A[], int n){
    for(int i = 0; i < n; i++){
        A[i] = rand() % 10;
    }
}
void Xuat(int A[], int n){
    for(int i = 0; i < n; i++){
        cout << A[i] << " ";
    }
}
void BubbleSort(int A[], int n){
    for(int i = 0; i < n - 1; i++){
        for(int j = n - 1; j > i; j--){
            if(A[j] < A[j - 1]){
                swap(A[j], A[j - 1]);
            }
        }
    }
}
int Search(int A[], int n, int x){
    for(int i = 0; i < n; i++){
        if(A[i] == x){
            return i;
        }
    }
    return -1;

}
int BinarySearch(int A[], int n, int x){
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

int BinarySearch_Recursive(int A[], int left, int right, int x){
    if(left > right){
        return -1;
    }
    int mid = (left + right) / 2;
    if(A[mid] == x){
        return mid;
    }
    if(A[mid] < x){
        return BinarySearch_Recursive(A, mid + 1, right, x);
    }else{
        return BinarySearch_Recursive(A, left, mid - 1, x);
    }
}