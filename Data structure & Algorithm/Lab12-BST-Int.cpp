#include "bits/stdc++.h"
using namespace std;

struct Node {
  int data;
  Node* left;
  Node* right;
} root;

Node* insert(int x, Node *root);	//Chen x vao cay root
int Search(int x, Node *root);	//Tra ve 1 neu co x tren cay, nguoc lai 0
Node *Delete(int x, Node *root);	//Xoa x khoi cay neu co x tren cay
int DemSoNode(Node *root);			//Dem so node tren cay
int DoCao(Node *root);    //Lay do cao cay
Node* createNode(int x);
void inOrder(Node *root);	//Duyet cay theo thu tu trung tu
void preOrder(Node *root);	//Duyet cay theo thu tu tien tu
void postOrder(Node *root);	//Duyet cay theo thu tu hau tu

int main(void){
  // example main test
  Node *root = NULL;
  root = insert(50, root);
  root = insert(30, root);
  root = insert(20, root);
  root = insert(40, root);
  root = insert(70, root);
  root = insert(60, root);
  root = insert(80, root);
  cout << "Inorder: ";
  inOrder(root);
  cout << endl;
  cout << "So node: " << DemSoNode(root) << endl;
  cout << "Do cao: " << DoCao(root) << endl;
  cout << "Search 50: " << Search(50, root) << endl;
  cout << "Search 80: " << Search(80, root) << endl;
  cout << "Search 100: " << Search(100, root) << endl;
  root = Delete(50, root);
  cout << "Inorder: ";
  inOrder(root);
  cout << endl;
  cout << "So node: " << DemSoNode(root) << endl;
  cout << "Do cao: " << DoCao(root) << endl;
  return 0;
}

Node* createNode(int x){
  Node* temp = new Node();
  temp->data = x;
  temp->left = NULL;
  temp->right = NULL;
  return temp;
}

Node* insert(int data, Node *root){
  if (root==NULL){
    root = createNode(data);
    return root;
  }
  
  if (data > root->data){
    root->right = insert(data, root->right);
  } else if (data < root->data){
    root->left = insert(data, root->left );
  }
  return root;
}

int Search(int x, Node *root){
  if (root == NULL) return 0;
  if (root->data == x) return 1;
  if (x > root->data) return Search(x, root->right);
  return Search(x, root->left);
}

Node* Delete(int x, Node *root){
  if (root == NULL) return root;
  if (x > root->data) root->right = Delete(x, root->right);
  else if (x < root->data) root->left = Delete(x, root->left);
  else {
    if (root->left == NULL){
      Node* temp = root->right;
      delete root;
      return temp;
    } else if (root->right == NULL){
      Node* temp = root->left;
      delete root;
      return temp;
    }
    Node* temp = root->right;
    while (temp->left != NULL) temp = temp->left;
    root->data = temp->data;
    root->right = Delete(temp->data, root->right);
  }
  return root;
}

int DemSoNode(Node *root){
  if (root == NULL) return 0;
  return 1 + DemSoNode(root->left) + DemSoNode(root->right);
}

int DoCao(Node *root){
  if (root == NULL) return 0;
  return 1 + max(DoCao(root->left), DoCao(root->right));
}

void inOrder(Node *root){
  if (root == NULL) return;
  inOrder(root->left);
  cout << root->data << " ";
  inOrder(root->right);
}

void preOrder(Node *root){
  if (root == NULL) return;
  cout << root->data << " ";
  preOrder(root->left);
  preOrder(root->right);
}

void postOrder(Node *root){
  if (root == NULL) return;
  postOrder(root->left);
  postOrder(root->right);
  cout << root->data << " ";
}
