#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
};

Node *newNode(int data)
{
    Node *new_node = new Node;
    new_node->data = data;
    new_node->next = NULL;
    return new_node;

}

//function to reverse the linked list

Node *reverse(Node *head)
{
    Node *prev = NULL, *current = head, *next;

    while ( current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    return prev;
    
}

//Function to add  1 to linked list and return the head node of resultatn
Node *addOneUtil(Node *head)
{
    //res is the
    Node* res = head;
    Node *temp, *prev = NULL;

    int carry = 1 , sum;

    while(head != NULL)
    {

        sum = carry + head->data;

        carry = (sum >= 10)? 1: 0;

        sum = sum % 10;

        head->data = sum;

        temp = head;
        head = head->next;
    }
    if (carry > 0)
        temp->next  = newNode(carry);

    return res;

}

Node* addOne(Node *head)
{
    head = reverse(head);
    head = addOneUtil(head);
    return reverse(head);

}

void printList(Node *node)
{
    while (node != NULL)
    {
        cout << node->data;
        node = node->next;
    }
    cout<<endl;
}
 
/* Driver program to test above function */
int main(void)
{
    Node *head = newNode(1);
    head->next = newNode(9);
    head->next->next = newNode(9);
    head->next->next->next = newNode(9);
 
    cout << "List is ";
    printList(head);
 
    head = addOne(head);
 
    cout << "\nResultant list is ";
    printList(head);
 
    return 0;
}