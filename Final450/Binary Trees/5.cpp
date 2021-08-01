// Recursive optimized C++ program to find the diameter of a
// Binary Tree
#include <bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node* left, *right;
};

struct node* newNode(int data)
{
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;

}

void inorder(node* root){
    if (root == NULL)  
        return ;
    inorder(root->left);
    cout <<" "<< root->data;
    inorder(root->right);

}

struct node* mirror(node* root){
    if (root == NULL)
        return root;
    
    struct node* t = root->left;
    root->left = root->right;
    root->right = t;

    if(root->left)
        mirror(root->left);
    if(root->right)
        mirror(root->right);


    return root;

}


int main()
{
    node* tree = newNode(5);
    tree->left  = newNode(3);
    tree->right = newNode(6);

    tree->left->left = newNode(2);
    tree->left->right = newNode(4);
    printf("inorder of original tree");
    inorder(tree);

    mirror(tree);

    printf("\n Inorder of mirror trees:");
    inorder(tree);
    return 0;

}