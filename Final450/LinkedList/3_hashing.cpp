/*Detect loop in a linked list
Hashing Approach
Traverse the list one by one and keep putting
 the node addresses in a Hash Table. At any point,
  if NULL is reached then return false, 
  and if next of current node points
  to any of the previously stored nodes in Hash then return true. 
*/
// C++ program to detect loop in a linked list
#include <bits/stdc++.h>
using namespace std;
 
/* Link list node */
struct Node {
    int data;
    struct Node* next;
};

void push(struct Node** head_ref, int new_data)
{
    //ALLOCATE A NODE
    struct Node* new_node = new Node();

    //put in the data
    new_node->data = new_data;

    //link the old list 
    new_node->next = (*head_ref);

    //make the head poitn to new_node
    (*head_ref) = new_node;

}

//Return true if loop
//else false
bool detectLoop(struct Node* h)
{
    unordered_set<Node* 
}