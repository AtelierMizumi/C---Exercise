#include <iostream>
using namespace std;

char nodes[5] = {'A', 'B', 'C', 'D', 'E'};
int G[5][5] = { // Ma tran ke mo ta lai graph
  {0, 1, 1, 0, 0},
  {1, 0, 0, 1, 0},
  {1, 0, 0, 1, 1},
  {0, 1, 1, 0, 1},
  {0, 0, 1, 1, 0}
};

int Q[30];
int front = 0, rear = 0;

int isEmpty() {
  return front == rear;
}

int isFull() {
  return (rear + 1) % 30 == front;
}

void enQueue(int x);
int deQueue();
void print(int n, int x[][5]);
void BFT(int n, int x[][5]);
void DFT(int n, int x[][5]);
void DFT_Recur(int n, int x[][5], int u, int visited[]);

int main() {
  print(5, G);
  cout << "BFT: ";
  BFT(5, G);
  cout << endl;
  cout << "DFT: ";
  DFT(5, G);
  cout << endl;
  int visited[5];
  for(int i = 0; i < 5; i++) {
    visited[i] = 0;
  }
  cout << "DFT_Recur: ";
  DFT_Recur(5, G, 0, visited);
  cout << endl;
  return 0;
}

void enQueue(int x) {
  if(isFull()) {
    cout << "Queue is full" << endl;
  } else {
    Q[rear] = x;
    rear = (rear + 1) % 30;
  }
}

int deQueue() {
  if(isEmpty()) {
    cout << "Queue is empty" << endl;
    return -1;
  } else {
    int x = Q[front];
    front = (front + 1) % 30;
    return x;
  }
}

void print(int n, int x[][5]) {
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      cout << x[i][j] << " ";
    }
    cout << endl;
  }
}

void BFT(int n, int x[][5]) {
  int visited[n];
  for(int i = 0; i < n; i++) {
    visited[i] = 0;
  }
  for(int i = 0; i < n; i++) {
    if(visited[i] == 0) {
      enQueue(i);
      visited[i] = 1;
      while(!isEmpty()) {
        int u = deQueue();
        cout << nodes[u] << " ";
        for(int v = 0; v < n; v++) {
          if(x[u][v] == 1 && visited[v] == 0) {
            enQueue(v);
            visited[v] = 1;
          }
        }
      }
    }
  }
}

void DFT(int n, int x[][5]) {
  int visited[n];
  for(int i = 0; i < n; i++) {
    visited[i] = 0;
  }
  for(int i = 0; i < n; i++) {
    if(visited[i] == 0) {
      enQueue(i);
      visited[i] = 1;
      while(!isEmpty()) {
        int u = deQueue();
        cout << nodes[u] << " ";
        for(int v = 0; v < n; v++) {
          if(x[u][v] == 1 && visited[v] == 0) {
            enQueue(v);
            visited[v] = 1;
          }
        }
      }
    }
  }
}

void DFT_Recur(int n, int x[][5], int u, int visited[]) {
  visited[u] = 1;
  cout << nodes[u] << " ";
  for(int v = 0; v < n; v++) {
    if(x[u][v] == 1 && visited[v] == 0) {
      DFT_Recur(n, x, v, visited);
    }
  }
}
