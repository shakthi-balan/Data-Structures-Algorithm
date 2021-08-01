#include <bits/stdc++.h>
using namespace std;
 
struct Node {
    int data;
    struct Node* left;
    struct Node* right;

    //val is the key or the value that has to be added to the data part
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

int main()
{
    struct Node* root = new Node(1);
''
    root->left = new Node(2);
    root->right = new Node(3);
}