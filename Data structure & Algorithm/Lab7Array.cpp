// queue array
#include "bits/stdc++.h"
#define MAX 5
using namespace std;

int front = -1;
int rear = -1;

void Enqueue(char char_queue[], char x);
char Dequeue(char char_queue[]);
bool isEmpty(char char_queue[]);
bool isFull(char char_queue[]);

int main(void){

    char char_queue[MAX];
    Enqueue(char_queue,'V');
    Enqueue(char_queue,'K');
    Enqueue(char_queue,'U');

    cout << Dequeue(char_queue);
    cout << Dequeue(char_queue);
    cout << Dequeue(char_queue);

    cout << '\n';
    cout << "Front: " << front << '\n';
    cout << "Rear: " << rear << '\n';
    return 0;
}

void Enqueue(char char_queue[], char x){
    if (isFull(char_queue)){
        cout << "Queue is full" << '\n';
    } else {
        if (isEmpty(char_queue)){
            front = rear = 0;
        } else {
            rear = (rear+1)%MAX;
        }
        char_queue[rear] = x;
    }
}

char Dequeue(char char_queue[]){
    char x;
    if (isEmpty(char_queue)){
        cout << "Queue is empty" << '\n';
        return '0';
    } else {
        x = char_queue[front];
        if (front==rear){
            front = rear = -1;
        } else {
            front = (front+1)%MAX;
        }
        return x;
    }
}

bool isEmpty(char char_queue[]){
    if (front==-1 && rear==-1){
        return true;
    } else {
        return false;
    }
}

bool isFull(char char_queue[]){
    if ((rear+1)%MAX==front){
        return true;
    } else {
        return false;
    }
}



