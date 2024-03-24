#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = NULL;
void AddFirst(int x);
void AddLast(int x);
void Traversal();
Node* GetNode(int n);
void Insert(int x, int n);
Node* Search(int x);
void DelFirst();
void DelLast();
void DelMiddle(int n);
int CountNode();
// Extra
Node* newNode(int x);
void freeList(struct Node *head);

    
int main(void){
    // NOTE: Index n count from 0

    AddLast(1);
    AddLast(2);
    AddLast(3);
    AddLast(4);
    AddLast(5);

    AddFirst(1);
    AddFirst(2);
    AddFirst(3);
    AddFirst(4);
    AddFirst(5);

    Traversal();

    Node* exampleNode = GetNode(6);
    if (exampleNode!=NULL){
        cout << exampleNode->data << '\n';
        cout << exampleNode->next << '\n';
    } else {
        cout << "Search couldn't find the data." << '\n';
    } // if the node is null and access and print nodeptr->data anyways
      // the program will get SIGSEV 
      // address boundary error, be cautious

    Insert(727, 5);
    
    Node* exampleNode2 = Search(727);
    if (exampleNode2!=NULL) {
        cout << exampleNode2->data << '\n';
        cout << exampleNode2->next << '\n';
    } else {
        cout << "Search couldn't find the data." << '\n';
    }
    
    Traversal();
    DelFirst();
    Traversal();
    DelMiddle(4);
    Traversal();
    DelLast();
    Traversal();


    freeList(head);
    return 0;
}

void AddFirst(int x){
    Node* P = newNode(x);
    if (head==NULL)
        head = P;
    else {
        P->next=head; // P.next = Second Element 
        head=P; // reassign the Head
    }
}

void AddLast(int x){
    Node* P = newNode(x);
    if (head==NULL){
        head = P;
    } else {
        Node *q = head;
        while (q->next)
            q = q->next;
        q->next=P;
    }
    
}

void Traversal(){
    Node *P = head; // assign head
    while (P!=NULL) {
        cout<< P->data << ' '; // print data
        P=P->next; // Move to the next node
    }
    cout << '\n';
}

Node *GetNode(int n){
    Node *q = head;
    if (n > CountNode() || n < 0){
        cout << "Position n out of bound";
        return NULL;
    }
    while (n){
        q=q->next;
        n--;
    }
    return q;
} // becareful for address boundary

void Insert(int x, int n){
    if (n < 0 || n >= CountNode()){ // index n counts from 0
        cout << "Invalid position n, Insert failed.";
        return;
    }
    if (CountNode() == 0){
        AddFirst(x);
    }
    else if (n==0){
        Node* P = newNode(x);
        P->next=head;
        head=P;
    } else if (n==CountNode()-1){
        AddLast(x);
    } else {
        Node* P = newNode(x);
        Node* q = head;
        while (n-1){
            q=q->next;
            n--;
        }
        P->next=q->next;
        q->next=P;
    }
}

Node *Search(int x){
    Node *q = head;
    int position = 1;
    while (q!=NULL) {
        if (q->data==x)
            return q;
        q = q->next;
    }
    return NULL;
}

void DelFirst(){
    if (head!=NULL){
        Node* tmp = head;
        head = head->next;
        delete(tmp);
    }
}

void DelLast(){
    if (head){
        Node* q = head;
        while (q->next->next)
            q=q->next;
        delete(q->next);
        q->next=NULL;
    }
}

void DelMiddle(int n){
    if (n < 0 || n >= CountNode()) {
        cout << '\n' << "Invalid position n" << '\n';
    } else if (n==0){
        DelFirst();
    } else if (n==CountNode()-1){
        DelLast();
    } else {
        Node* q = head;
        while (n-1) {
            q=q->next;
            n--;
        }
        Node* tmp = q->next;
        q->next=q->next->next;
        delete tmp;
    }
}

int CountNode(){
    Node *q = head;
    int n = 0;
    while (q!=NULL) {
        q=q->next;
        n++;
    }
    return n;
}

Node* newNode(int x){
  Node *newNode = new Node;
  newNode->data = x;
  newNode->next = NULL;
  return newNode;
} // return new node with int x and NULL next ptr

void freeList(struct Node *head){
    struct Node* tmp;

    while (head != NULL)
    {
       tmp = head;
       head = head->next;
       delete(tmp);
    }
} // this function is unnecessary now because its already 
  // handled by the destructor of the class managing the list 
  // but later when implementing multiple linked list
  // all above functions will take a head as input
  // and this will have a better use

