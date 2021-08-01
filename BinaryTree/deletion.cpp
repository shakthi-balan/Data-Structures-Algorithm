// C++ program to delete element in binary tree
#include <bits/stdc++.h>
using namespace std;
 
/* A binary tree node has key, pointer to left
child and a pointer to right child */
struct Node {
    int key;
    struct Node *left, *right;
};
 
/* function to create a new node of tree and
return pointer */
struct Node* newNode(int key)
{
    struct Node* temp = new Node;
    temp->key = key;
    temp->left = temp->right = NULL;
    return temp;
};
 
/* Inorder traversal of a binary tree*/
void inorder(struct Node* temp)
{
    if (!temp)
        return;
    inorder(temp->left);
    cout << temp->key << " ";
    inorder(temp->right);
}
/* function to delete the given deepest node
(d_node) in binary tree */
void deletDeepest(struct Node* root, struct Node* d_node)
{
    queue<struct Node*> q;
    q.push(root);

    //Do lebel order traversal until last node
    struct Node* temp;
    while (!q.empty())
    {
        temp = q.front();

    }
}