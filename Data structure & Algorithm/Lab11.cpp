// Exercise related to Binary Tree data structure
#include <bits/stdc++.h>
using namespace std;

struct Node {
    char data;
    Node* left;
    Node* right;
};

void initTree(struct Node* node);
void preOrderTraversal(struct Node* node);https://www.facebook.com/profile.php?id=100090228522285&sk=reels_tab
    Node* node = new Node();
    initTree(node);
    cout << "PreOrderTraversal: ";
    preOrderTraversal(node);
    cout << endl;
    cout << "InOrderTraversal: ";
    inOrderTraversal(node);
    cout << endl;
    cout << "PostOrderTraversal: ";
    postOrderTraversal(node);
    cout << endl;
    cout << "BFT: ";
    BFT(node);
    return 0;
};

void initTree(struct Node* node){
    node->data = 'A';
    node->left = new Node();
    node->right = new Node();
    node->left->data = 'B';
    node->left->left = new Node();
    node->left->right = new Node();
    node->left->left->data = 'D';
    node->left->left->left = NULL;
    node->left->left->right = NULL;
    node->left->right->data = 'E';
    node->left->right->left = NULL;
    node->left->right->right = NULL;
    node->right->data = 'C';
    node->right->left = new Node();
    node->right->right = new Node();
    node->right->left->data = 'F';
    node->right->left->left = NULL;
    node->right->left->right = NULL;
    node->right->right->data = 'G';
    node->right->right->left = NULL;
    node->right->right->right = NULL;   
}

void preOrderTraversal(struct Node* node){
    if(node == NULL)
        return;
    cout << node->data << " ";
    preOrderTraversal(node->left);
    preOrderTraversal(node->right);
}

void inOrderTraversal(struct Node* node){
    if(node == NULL)
        return;
    inOrderTraversal(node->left);
    cout << node->data << " ";
    inOrderTraversal(node->right);
}

void postOrderTraversal(struct Node* node){
    if(node == NULL)
        return;
    postOrderTraversal(node->left);
    postOrderTraversal(node->right);
    cout << node->data << " ";
}

void BFT(struct Node* node){
    queue<Node*> q;
    q.push(node);
    while(!q.empty()){
        Node* p = q.front();
        q.pop();
        cout << p->data << " ";
        if(p->left != NULL)
            q.push(p->left);
        if(p->right != NULL)
            q.push(p->right);
    };
    cout << endl;
}