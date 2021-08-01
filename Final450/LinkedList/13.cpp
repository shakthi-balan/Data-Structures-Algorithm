//Merge sort for Linked list
#include<iostream>

using namespace std;

class Node {
    public: 
        int data;
        Node* next;
};


FrontBackSplit(Node* source, Node** frontRef, Node** backRef )
{
    Node* fast;
    Node* slow;
    slow = source;
    fast = source->next ;

    //Advance fast two nodes and slow one node @once
    while(fast != NULL)
    {
        fast = fast->next;
        if (fast!= NULL)
        {
            slow = slow->next;
            fast = fast->next;
            
        }
    }
    //slow is before the midpoint in the list , so split it in
    //two at that point 
    *frontRef = source ;
    *backRef = slow->next;
    slow->next = NULL;
}

Node* SortedMerge(Node* a, Node* b){
    Node* result = NULL;

    //Base Case
    if(a == NULL)
        return (b);
    
    else if(b == NULL)
        return (a);

    //Pick either a or b, and recur
    if(a->data <= b->data){
        result = a;
        result->next = SortedMerge(a->next, b);
    }
    else {
        result = b;
        result->next = SortedMerge(a, b->next);

    }
    return (result);
    
}

void MergeSort(Node** headref)
{
    Node* head = *headref;
    Node* a;
    Node* b;

    //Base case -- length 0 or 1
    if((head == NULL ) || (head->next == NULL)){
        return ;

    }
    //Split head into 'a' and 'b' substitutes
    FrontBackSplit(head, &a, &b);

    //Recursively sort the sublists
    Merge(&a);
    Merge(&b);

    *head_ref = SortedMerge( a, b );
}
/* Function to print nodes in a given linked list */
void printList(Node* node)
{
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
}
 
/* Function to insert a node at the beginging of the linked list */
void push(Node** head_ref, int new_data)
{
    /* allocate node */
    Node* new_node = new Node();
 
    /* put in the data */
    new_node->data = new_data;
 
    /* link the old list off the new node */
    new_node->next = (*head_ref);
 
    /* move the head to point to the new node */
    (*head_ref) = new_node;
}
 
/* Driver program to test above functions*/
int main()
{
    /* Start with the empty list */
    Node* res = NULL;
    Node* a = NULL;
 
    /* Let us create a unsorted linked lists to test the functions
Created lists shall be a: 2->3->20->5->10->15 */
    push(&a, 15);
    push(&a, 10);
    push(&a, 5);
    push(&a, 20);
    push(&a, 3);
    push(&a, 2);
 
    /* Sort the above created Linked List */
    MergeSort(&a);
 
    cout << "Sorted Linked List is: \n";
    printList(a);
 
    return 0;
}