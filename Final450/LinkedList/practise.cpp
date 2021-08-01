#include<iostream>

using namespace std;

class Node {
    public: 
        int data;
        Node* next = NULL;
}

MergeSort( Node** headRef)
{
    Node* head  = headRef;
    Node* a;
    Node* b;

    if(head == NULL || or head->next = NULL)
        return ;
    
    FrontBackSplit(head, &a, &b)
}

Node* SortedMerge (Node *a , Node* b)
{
    Node* result = NULL;

    //Base Case
    if(a == NULL)
        return (b);
    
    else if(b == NULL)
        return (a);
    
    if( a->data <= b->data)
    {
        result = a;
        result->next = SortedMerge(a->next , b)
    }
    else {
        result = a;
        result ->next = SortedMerge(a, b->next);
    }
    return (result);
}
FrontBackSplit( Node* source , Node** frontRef, Node** backRef)
{
    Node* fast;
    Node* slow;
    slow = source ;
    fast = source->next;

    if(fast!= NULL)
    {
        fast = fast->next;
        if(fast != NULL)
        {
            slow = slow->next;
            fast = fast->next;
        }
    }
    *frontRef  source;
    *backRef = slow->next;
    slow->next = NULL;

}