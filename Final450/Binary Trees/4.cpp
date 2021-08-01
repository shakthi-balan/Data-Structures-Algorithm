//Diameter of a Binary Tree

#include<bits/stdc++.h>
using namespace std;
 
struct node{
    int data ;
    struct node *left, *right;

};

struct node* newNode(int data);

int max(int a , int b){
    return (a>b) ? a:b;
}

int height( struct node* node);

int diameter(struct node* tree)
{
    //base case where tree is empty
    if(tree == NULL)
        return 0;

    //get the height if left and right sub-trees
    int lheight = height(tree->left);
    int rheight = height(tree->right);

    //get diameter of left and rigt sub-trees
    int ldiameter = diameter(tree->left);
    int rdiameter = diameter(tree->right);

    //Return max of the following three
    /*1) Diameter of left subtree
      2) Diameter of right subtree
      3) Height of left subtree + height of subtree +1*/
      return max(lheight + rheight +1, max(ldiameter, rdiameter));
}

// The function Compute the "height" of a tree. Height is
// the number f nodes along the longest path from the root
// node down to the farthest leaf node.
int height(struct node* node)
{

    if(node == NULL)
        return 0;

    return 1 + max(height(node->left),height(node->right));
}

// Helper function that allocates a new node with the
// given data and NULL left and right pointers.
struct node* newNode(int data)
{
    struct node* node
        = (struct node*)malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
 
    return (node);
}

int main()
{
    struct node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
 
    // Function Call
    cout << "Diameter of the given binary tree is " <<
        diameter(root);
 
    return 0;
}