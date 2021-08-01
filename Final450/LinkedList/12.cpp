//Find intersection of Y-shaped Linked lIst
// Method 3 :- Using Difference of node counts

#include<bits/stdc++.h>
using namespace std;

class Node{
    public: 
        int data;
        Node* next;
};

//Function to get the counts of node in a linked list
int getCount(node* head);

/*function to get the counts f node in a linked list*/
int getInersectionNode(int d, Node* head1, Node* head2)

int getIntersectionNode(Node* head1, Node* head2)
{
    int c1 = getCount( head1);
    int c2 = getCount( head2);
    int d;
    if( c1 > c2)
    {
        d  = c1-c2 ;
        return _getIntersection( d , head1, head2);
    }
    else
    {
        d = c2 - c1 ;
        return _getIntersection( d , head2, head1);
        
    }
}
/*Fucntion to get the intersection point of two 
  linked lists head1 and head2 where head1 has d more
  nodes than head2*/

int main() 
{
    Node* newNode;

    Node* head1 = new Node();
    head1->data = 10;

    Node* head2 = new Node();
    head2->data = 3;

    newNode = new Node();
    newNode->data = 6;
    head2->next = newNode;
  
    newNode = new Node();
    newNode->data = 9;
    head2->next->next = newNode;
  
    newNode = new Node();
    newNode->data = 15;
    head1->next = newNode;
    head2->next->next->next = newNode;
  
    newNode = new Node();
    newNode->data = 30;
    head1->next->next = newNode;
  
    head1->next->next->next = NULL;
  
    cout << "The node of intersection is " << getIntesectionNode(head1, head2);
}

