#include<iostream>

using namespace std;

struct Node{
    int data;
    Node* next ;
    Node(int data){
        this->data = data;
        next = NULL;
    }
};

struct LinkedList{
    Node* head;
    LinkedList(){ head = NULL; }
    //Function to reverse the linked list
    void reverse ()
    {
        //Initialiee current
        Node* current = head;
        Node *prev  = NULL,  *next = NULL;

        while (current != NULL)
        {
            //store next in a variable
            next = current->next ;

            //reversing current node pointer
            current->next = prev;

            //changing prev to current
            prev = current;
            current = next ;
            
        }
        head = prev;
    }
    void print()
    {
        struct Node* temp = head;
        while (temp != NULL)
        {
            cout<< temp->data<< "";
            temp = temp->next;

        }
    
    }
    void push(int data)
    {
        Node* temp = new Node(data);
        temp->next = head;
        head = temp;

    }
};

//Driver code
int main()
{ /* Start with the empty list */
    LinkedList ll;
    ll.push(20);
    ll.push(4);
    ll.push(15);
    ll.push(85);
 
    cout << "Given linked list\n";
    ll.print();
 
    ll.reverse();
 
    cout << "\nReversed Linked list \n";
    ll.print();
    return 0;
}