//C++ program to print left view of Binary Tree
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left, *right;
};

//A utility function to create a new Binary Tree node
struct Node *newNode(int item)
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = item;
    temp->data = temp->right = NULL;
    return temp;

}

//Recursive function to print left view
// of a binary tree.
void leftViewUtil(struct Node *root, int level, int *max_level)
{
    //Base case
    if(root == NULL ) return ;

    //If this is the first Node of its level
    if(*max_level < level )
    {
        cout << root->data << " ";
        *max_level = level;
    }

    //Recur for left subtree first , 
    //then right subtree
    leftViewUtil(root->left , level + 1, max_level);
    leftViewUtil(root->right, level + 1, max_level);
}

// a wrapper over leftViewUtil()
