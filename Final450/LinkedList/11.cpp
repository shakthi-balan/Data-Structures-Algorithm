#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void push(Node** head_ref, int new_data)
/*This solution uses the temporary dummy to build up 
the result list*/
Node* sortedIntersect(Node* a, Node* b)
{
    Node dummy;
    Node* tail = &dummy;
    dummy.next = NULL;

    /*once one or the other list runs out -- we're out */
    while (a != NULL &&  != NULL)
    {
        if( a->data== b->data)
            push((&tail->next),a->data);
            tail = tail->next;
            a = a->next;
            b = b->next;
            //advance the smaller list
        else if(a->data < b->data )
            a = a->next;
        else 
            b = b->next;
    }
    return (dummy.next);
    
        

}