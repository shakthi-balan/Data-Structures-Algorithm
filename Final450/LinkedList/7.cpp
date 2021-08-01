/* Program to remove duplicates in an unsorted 
   linked list */
#include<bits/stdc++.h> 
using namespace std; 
  
/* A linked list node */
struct Node 
{ 
    int data; 
    struct Node *next; 
}; 
  
// Utility function to create a new Node 
struct Node *newNode(int data) 
{ 
   Node *temp = new Node; 
   temp->data = data; 
   temp->next = NULL; 
   return temp; 
} 

/* Function to remove duplicates from a 
   unsorted linked list */
   void removeDuplicates(struct Node *start)
   {
       struct Node *ptr1, *ptr2, *dup;
       ptr1 = start;

       /* Pick elements one by one */
       while( ptr1 != NULL && ptr1->next != NULL)
       {
           ptr2 = ptr1;

           /* Compare the picked element with rest 
           of the elements */
           while (ptr2->next != NULL)
           {
               /*If duplicate then delete*/
                

           }
       }
   }