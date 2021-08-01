//ZigZag Traversak Binary tree
//O(n)
#include<iostream>
#include<stack>
using namespace std;

struct Node{
    int data;
    struct Node *left = NULL,*right = NULL;
};

struct Node* newNode(int data)
{
    struct Node* node = new struct Node;
    node->data = data;
    node->left = node->right = NULL;
    return (node);
}
//function for ZigZag traersal
void zigzagtraversal(struct Node* root)
{
    //if null then return 
    if(!root)
        return ;
    
    //declare two stacks
    stack<struct Node* > currentlevel;
    stack<struct Node*> nextlevel;

    //push the root
    currentlevel.push(root);

    //check if stack is empty
    bool leftoright = true;
    //left =1, right =0
    while(!currentlevel.empty()){
        //pop out of stack
        struct Node* temp = currentlevel.top();
        currentlevel.pop();

        //if not null
        if(temp){

            //print data in it
            cout << temp->data << " ";

            //store data according to current order
            if(leftoright)
            {
                if(temp->left)
                    nextlevel.push(temp->left);
                if(temp->right)
                    nextlevel.push(temp->right);

            }
            if(!leftoright)
            {
                if(temp->right)
                    nextlevel.push(temp->right);
                if(temp->left)
                    nextlevel.push(temp->left);

            }
        }
        if(currentlevel.empty()){
            leftoright = !leftoright;
            swap (currentlevel, nextlevel);
        }

    }
}
//driver program
int main()
{
    struct Node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(7);
    root->left->right = newNode(6);
    root->right->left = newNode(5);
    root->right->right = newNode(4);
    cout << "ZigZag Order traversal of binary tree is \n";

    zigzagtraversal(root);
    
    return 0;
}