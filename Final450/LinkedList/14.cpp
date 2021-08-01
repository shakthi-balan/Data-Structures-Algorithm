//C++ program for Quick Sort on Singly linked list

#include<bits/stdc++.h>

using namespace std;

//a node of the singly linked list
struct Node {
    int data;
    struct Node* next;
};

//a utility function to insert a node at the beginning
//of linked list
void push(struct Node** head_ref, int new_data)
{
    //allocate node
    struct Node* new_node = new Node;

    //put in the data
    new_node->data = new_data;

    //link the old list off the new node
    new_node->next = (*head_ref);

    //move the head to point to the new node
    (*head_ref) = new_node;
}

//a utility function to print linked list
void printList(struct Node* node)
{
    while(node != NULL)
    {
        printf("%d", node->data);
        node = node->next;
    }
    printf("\n");
}

//Returns the last node of the list
struct Node* getTail (struct Node* cur)
{
    while(cur != NULL && cur->next != NULL )
        cur = cur->next;

    return cur;
}

//partitions in list taking the last element as the pivot
struct Node* partition(struct Node* head, struct Node* end, 
                        struct Node** newHead, struct Node** newEnd)
{
    struct Node* pivot = end;
    struct Node *prev = NULL, *cur = head , *tail = pivot;
    

    //During partition head and end will be changed  
    // which is updated in newHead and newEnd Variables
    while (cur != pivot)
    {
        if(cur->data < pivot->data)
        {
            //First node that has a value less than the pivot
            //becomes the new head
            if((*newHead)== NULL)
                (*newHead) = cur;

            prev = cur;
            cur = cur->next;
        }
        else //if cur node is greater than pivot
        {
            if (prev == NULL)
                prev->next = cur->next ;
            
            struct Node* tmp = cur->next;
            cur->next = NULL;
            tail->next = cur ;
            cur=tail;
            tmp = cur;
        }
    }
    if((*newHead) == NULL)
            (*newHead) == pivot;
            
    *newEnd = tail;
    return pivot;
    
}

struct Node* quickSortRecur(struct Node* head, struct Node* end)
{
    //base condition
    if(!head || head == end)
        return head ;
    
    Node *newHead = NULL, *newEnd = NULL;

    //partition the list , newHead and newEnd will be updated 
    //by the partition function 
    struct Node* pivot = partition(head , end , &newHead, &newEnd);

    //if pivot is the smallest element - no need to recur for the left part
    if(newHead != pivot)
    {
        //set the node before the pivot node as NULL
        struct Node* tmp = newHead;
        while(tmp->next != pivot)
            tmp = tmp->next;
        tmp->next = NULL;

        //Recur for the list befor pivot
        newHead = quickSortRecur(newHead, tmp);

        //Change next of last node of the left half to pivot
        tmp = getTail(newHead);
        tmp->next = pivot;
    }

    //Recur for the list after the pivot element 
    pivot->next = quickSortRecur(pivot->next, newEnd);

    return newHead;
}

//The main function for quick sort. 
//This is a wrapper over recursive function quickSortRecur()

void quicksort(struct Node** headRef)
{
    (*headRef) = quickSortRecur(*headRef, getTail(*headRef));
    return;

}
//Driver code
int main()
{
    struct Node* a = NULL;
    push(&a, 5);
    push(&a, 20);
    push(&a, 4);
    push(&a, 3);
    push(&a, 30);
    
    cout <<"Linked list before sorting\n";
    printList(a);

    quicksort(&a);

    cout <<"Linked list after sorting \n";
    printList(a);

    return 0;
    
}