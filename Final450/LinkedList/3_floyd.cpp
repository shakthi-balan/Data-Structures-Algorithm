//Write a program to Detect loop in a linked list.
//using Floyd;s Cycle method
#include<bits/stdc++.h>
using namespace std;

//Linked list node
class Node{
    public:
        int data;
        Node* next;

};


void push(Node** head_ref, int new_data)
{
    //allocate 
    Node* new_node = new Node();
    
    //put in the data
    new_node->data = new_data;
    new_node->next = *head_ref;
    *head_ref = new_node;

}

bool detectLoop(Node* list)
{
    Node *slow_p = list, *fast_p = list;

    while(slow_p && fast_p && fast_p ->next)
    {
        slow_p = slow_p->next;
        fast_p = fast_p->next->next;
        if(slow_p == fast_p)
            return 1;
    }
    return 0;
}

int main()
{
    Node* head = NULL;
    push (&head, 20);
     push(&head, 4);
    push(&head, 15);
    push(&head, 10);
 
    /* Create a loop for testing */
    head->next->next->next->next = head;
    if (detectLoop(head))
        cout << "Loop found";
    else
        cout << "No Loop";
    return 0;

}