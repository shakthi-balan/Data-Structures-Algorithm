#include <iostream>
#include <queue>
using namespace std;

struct node
{
    struct node *left;
    int data;
    struct node *right;

};

int treeHeight(node *root)
{
    if(root == NULL)
        return 0;
    
    queue<node *> q;

    q.push(root);
    int height = 0;

    while(1)
    {
        int nodeCount = q.size();
        if ( nodeCount == 0 )
            return height;

        height++;

        while (nodeCount > 0 )
        {
            
        }
    }

}