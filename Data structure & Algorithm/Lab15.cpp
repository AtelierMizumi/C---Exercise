#include <iostream>
using namespace std;

int HashFunction(int x);
void hashing(int x);
void PrintHashTable();
int Search(int x);
void LinearProbing(int x);
void QuadraticProbing(int x);

int arr[10];

int main(){
  hashing(1);
  hashing(2);
  hashing(3);
  hashing(4);
  hashing(5);
  hashing(6);
  hashing(7);
  hashing(8);
  hashing(9);
  hashing(10);
  PrintHashTable();
  cout << Search(1) << endl;
  cout << Search(2) << endl;
  cout << Search(3) << endl;
  cout << Search(4) << endl;
  cout << Search(5) << endl;
  cout << Search(6) << endl;
  cout << Search(7) << endl;
  cout << Search(8) << endl;
  cout << Search(9) << endl;
  cout << Search(10) << endl;
  return 0;
}

int HashFunction(int x){
  return x%10;
}
void hashing(int x){
  int index = HashFunction(x);
  if(arr[index] == -1){
    arr[index] = x;
  }
  else{
    LinearProbing(x);
  }
}

void LinearProbing(int x){
  int index = HashFunction(x);
  while(arr[index] != -1){
    index = (index+1)%10;
  }
  arr[index] = x;
}

void QuadraticProbing(int x){
  int index = HashFunction(x);
  int i = 1;
  while(arr[index] != -1){
    index = (index + i*i)%10;
    i++;
  }
  arr[index] = x;
}

void PrintHashTable(){
  for(int i = 0; i < 10; i++){
    cout << arr[i] << " ";
  }
  cout << endl;
}

int Search(int x){
  int index = HashFunction(x);
  if(arr[index] == x){
    return index;
  }
  else{
    int i = 1;
    while(arr[(index + i*i)%10] != x){
      i++;
    }
    return (index + i*i)%10;
  }
}
