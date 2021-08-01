// C++ program to add two numbers
// represented by linked list
#include <bits/stdc++.h>
using namespace std;
 
/* Linked list node */
class Node{
    public: 
    int data;
    Node* next;
};

//Functio to create new node with given data
Node* newNode(int data){
    Node* new_node = new Node();
    new_node->data = data;
    new_node->data = NULL;
    return new_node;

}

//Function to create a new node with given data
void push(Node** head_ref, int new_data)
{
    Node* new_node = newNode(new_data);

    new_node->next = (*head_ref);

    (*head_ref ) = new_node;

}

Node* addTwoLists(Node* first, Node* second)
{
    Node* res = NULL;
    Node *temp, *prev = NULL;
    int carry = 0, sum;

    while (first != NULL || second != NULL)
    {
        sum = carry + (first ? first->data:0) + (second? second->data: 0 );
        
    }
}