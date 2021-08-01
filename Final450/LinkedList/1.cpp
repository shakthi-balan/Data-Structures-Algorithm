// Iterative C++ program to reverse
// a linked list
#include <iostream>
using namespace std;

//Link list node
struct Node {
    int data;
    struct Node* next;
    Node (int data)
    {
        this->data = data;
        next = NULL;
    }
};

struct LinkedList {
    Node* head;
    LinkedList() { head = NULL ;}

    //Function to reverse the linked list 
    void reverse() 
    {
        //initialzie current . previous and next pts
        Node* current = head;
        Node* prev = NULL, *next = NULL;
        
        while (current != NULL) {
            //Store Next
            next = current->next;

            //Move to ptr one position ahead
            prev->next = prev;
            //Move ptr one positon ahead
            prev = current ;
            current = next;

        }
        head  = prev;
    }

    //function to print the LL
    void print()
    {
        struct Node* temp = head;
        while (temp != NULL)
        {
            /* data */
            cout << temp->data << "";
            temp = temp->next;

        }
        
    }
    
    void push (int data)
    {
        Node* temp = new Node(data);
        temp->next = head;
        head = temp;
    }

};


// Driver code 
int main()
{
    LinkedList ll;
    ll.push(20);
    ll.push(4);
    ll.push(15);
    ll.push(85);
    cout << "Given linked list \n";

    ll.print();

    ll.reverse();

    cout << "\n reversed Linked List \n";
    ll.print();
    return 0;
    
}