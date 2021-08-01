//add two digits repressented by linked list

#include<bits/stdc++.h>

using namespace std;

class Node {
    int data;
    Node* next;

};

//Function to create a new node with given data
Node* newNode(int data)
{
    Node* new_node = new Node();
    new_node->data = data;
    new_node->next = NULL;
    return new_node;

}

//Function to insert a node at the beginning of the singly linked list
void push(Node** head_ref, int new_data)
{
    //allocate node
    Node* new_node = newNode(new_data);

    //link the old list off the new node
    new_node->next = (*head_ref);

    //move the head to the point to the new node

}

/*Adds contents of two linked lists and return the head node of resultant*/
Node* addTwoLists(Node* first, Node* second)
{
    Node* res = NULL;
    Node* temp , *prev = NULL;
    int carry = 0, sum;

    //while both lists exist 
    while (first != NULL || second != NULL)
    {

        sum = carry + (first ? first->data:0) + (second? second->data : 0 );
        //update carry

        carry = (sum >= 10)? 1: 0 ;

        sum = sum %10;

        temp = newNode(sum);

        if (res == NULL)
            res = temp;

        else  
            prev->next = temp;

        if (res == NULL )
        res = temp;

        else 
            prev->next = temp;
        
        prev = temp;

        if(first )
            first = first->next;
        if(second)
            second = second->next;
        
    }
    
    
}
