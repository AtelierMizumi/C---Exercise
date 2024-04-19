#include "bits/stdc++.h"
using namespace std;


struct Node {
    char data;
    Node* next;
};

void Enqueue(char x);
char Dequeue();
bool isEmpty();

int main(void){
    Enqueue('V');
    Enqueue('K');
    Enqueue('U');

    cout << Dequeue();
    cout << Dequeue();
    cout << Dequeue();

    return 0;
}

