#include "bits/stdc++.h"
using namespace std;

struct Node {
  char data;
  Node* left;
  Node* right;
};

Node* insertNode(Node* root, char data);
Node* searchNode(Node* root, char data);
void deleteNode(Node* root, char data);
void preOrder(Node* root);
void inOrder(Node* root);

int main(void){
  Node* root = new Node();
  insertNode(root, 'A'); insertNode(root, 'B'); insertNode(root, 'C'); insertNode(root, 'D');
  insertNode(root, 'E'); insertNode(root, 'F'); insertNode(root, 'G'); insertNode(root, 'H');
  preOrder(root);
  inOrder(root);
  return 0;
}

Node* createNewNode(char data){
  Node* node = new Node();
  if (!node){
    cout << "Memory error!" << endl;
    return NULL;
  }
  node->data = data;
  node->left = NULL;
  node->right= NULL;
  return node;
}

Node* insertNode(Node* root, char data){
  if (root==NULL){
    root = createNewNode(data);
    return root;
  }
  if (data > root->data){
    root->right = insertNode(root->right, data);
  } else if (data < root->data){
    root->left = insertNode(root->left, data);
  }
  return root;
}

Node* searchNode(Node* root, char data);
void deleteNode(Node* root, char data);
void preOrder(Node* root){
  if (root!=NULL){
    cout << root->data << ' ';
    preOrder(root->left);
    preOrder(root->right);
  }
}

void inOrder(Node* root){
  if (root!=NULL){
    inOrder(root->left);
    cout << root->data << ' ';
    inOrder(root->right);
  }
}
