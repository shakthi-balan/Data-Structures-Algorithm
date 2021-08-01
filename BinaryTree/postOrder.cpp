#include <iostream>
using namespace std;
 
/* A binary tree node has data, pointer to left child
and a pointer to right child */
struct Node {
    int data;
    struct Node *left, *right;
    Node(int data)
    {
        this->data = data;
        left = right = NULL;
    }
};
 
/* Given a binary tree, print its nodes according to the
"bottom-up" postorder traversal. */
void printPostorder(struct Node* node)
{
    if(node == NULL)
        return;

    //first recur on left subtree
    printPostorder(node->left);

    printPostorder(node->right);

    cout << node->data << "";

}

void printInorder(struct Node* node)
{
    if(node == NULL)
    {
        
    }
}