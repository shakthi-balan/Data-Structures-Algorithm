/*CPP program to check if a tree is height-balancd or not*/
#include <bits/stdc++.h>
using namespace std;

/*a binary tree node has data, pointer to left child
and a pointer to right child*/
class Node {
    public:
        int data;
        Node* left;
        Node* right;
}

/*Returns the hight of a binary tree*/
int height(Node* Node);

/*Returns true if binary tree with root as root is height
balanced*/
bool isBalanced(Node* root)
{
    int lh; //left height
    int rh; //right hieght
    //if tree empty
    if(root == NULL)
        return 1;
    
    //get the height of left and right sub tree
    lh = height (root->left);
    rh = height (root->right);

    if ( abs(lh -rh )<= 1 && isBalanced(root->left) && isBalanced(root->right))
        return 1;
    
    /* If we reach here then tree is not height-balanced*/
    return 0;
}

/* returns maximum of two integers */
int max( int a, int b)
{
    return (a >=b )?a:b;
}

/* the function to Compute the "height" of tree . height is the 
number of nodes along the longest path from the root node down 
to the farthest leaf node */
int height(node* node)
{
    //base case tree is empty
    if(node == NULL)
        return 0;
    //if tree is not empty then height = 1+ ma left height and right height
    return 1 + max( height (node->left), height (node->right));

}

/* Helper function that allocates a new node with the 
given data and NULL left and right pointers*/
node* newNode(int data)
{
    node* Node = new Node();
    Node->data = data ;
    Node->left = NULL;
    Node->right = NULL;

    return (Node);
}

