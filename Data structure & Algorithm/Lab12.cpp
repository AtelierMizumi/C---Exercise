#include <bits/stdc++.h>
using namespace std;

struct Node {
    char data;
    Node* left;
    Node* right;
};

void initBinaryTree(Node* root);
void preOrder(Node* root);
void inOrder(Node* root);
void postOrder(Node* root);
void appendNode(Node* root, char data);
Node* searchNode(Node* root, char data);
Node* deleteNode(Node* root, char data);

int main(){
    Node* root = new Node;
    initBinaryTree(root);
    appendNode(root, 'B');
    appendNode(root, 'C');
    appendNode(root, 'D');
    appendNode(root, 'E');
    appendNode(root, 'F');
    appendNode(root, 'G');
    appendNode(root, 'H');
    appendNode(root, 'I');
    appendNode(root, 'J');
    appendNode(root, 'K');
    appendNode(root, 'L');
    appendNode(root, 'M');
    appendNode(root, 'N');
    appendNode(root, 'O');
    appendNode(root, 'P');
    appendNode(root, 'Q');
    appendNode(root, 'R');
    appendNode(root, 'S');
    appendNode(root, 'T');
    appendNode(root, 'U');
    appendNode(root, 'V');
    appendNode(root, 'W');
    appendNode(root, 'X');
    appendNode(root, 'Y');
    appendNode(root, 'Z');
    preOrder(root);
    cout << endl;
    inOrder(root);
    cout << endl;
    postOrder(root);
    cout << endl;
    root = deleteNode(root, 'G');
    preOrder(root);
    cout << endl;
    inOrder(root);
    cout << endl;
    postOrder(root);
    cout << endl;
    return 0;
}

void initBinaryTree(Node* root){
    root->data = 'A';
    root->left = NULL;
    root->right = NULL;
}

void preOrder(Node* root){
    if(root != NULL){
        cout << root->data << " ";
        preOrder(root->left);
        preOrder(root->right);
    }
}

void inOrder(Node* root){
    if(root != NULL){
        inOrder(root->left);
        cout << root->data << " ";
        inOrder(root->right);
    }
}

void postOrder(Node* root){
    if(root != NULL){
        postOrder(root->left);
        postOrder(root->right);
        cout << root->data << " ";
    }
}

void appendNode(Node* root, char data){
    if(root->left == NULL){
        Node* newNode = new Node;
        newNode->data = data;
        newNode->left = NULL;
        newNode->right = NULL;
        root->left = newNode;
    } else if(root->right == NULL){
        Node* newNode = new Node;
        newNode->data = data;
        newNode->left = NULL;
        newNode->right = NULL;
        root->right = newNode;
    } else {
        appendNode(root->left, data);
    }
}

Node* searchNode(Node* root, char data){
    if(root != NULL){
        if(root->data == data){
            return root;
        } else {
            Node* left = searchNode(root->left, data);
            Node* right = searchNode(root->right, data);
            if(left != NULL){
                return left;
            } else if(right != NULL){
                return right;
            }
        }
    }
    return NULL;
}


Node* findMin(Node* node) {
    while (node->left != nullptr)
        node = node->left;
    return node;
}


Node* deleteNode(Node* root, char data) {
    if (root == nullptr)
        return root;

    cout << "Deleting node with data: " << data << endl;

    // Search for the node to be deleted
    if (data < root->data) {
        cout << "Going left" << endl;
        root->left = deleteNode(root->left, data);
    } else if (data > root->data) {
        cout << "Going right" << endl;
        root->right = deleteNode(root->right, data);
    } else {
        cout << "Node found for deletion" << endl;
        // node with only one child or no child
        if (root->left == nullptr) {
            cout << "Deleting node with no left child" << endl;
            Node* temp = root->right;
            delete root;
            return temp;
        } else if (root->right == nullptr) {
            cout << "Deleting node with no right child" << endl;
            Node* temp = root->left;
            delete root;
            return temp;
        }
        // node with two children: Get the inorder successor (smallest
        // in the right subtree)
        cout << "Deleting node with two children" << endl;
        Node* temp = findMin(root->right);
        // Copy the inorder successor's content to this node
        root->data = temp->data;
        // Delete the inorder successor
        cout << "Deleting inorder successor with data: " << temp->data << endl;
        root->right = deleteNode(root->right, temp->data);
    }
    cout << "Returning root after deletion: " << root->data << endl;
    return root;
}
