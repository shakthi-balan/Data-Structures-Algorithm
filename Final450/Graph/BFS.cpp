//Program to print BFs traversal from a given source 
//vertex. BFS(int s) traverses vertices reachable from s

#include <iostream>
#include <list>

using namespace std;

/*This class represents a directed graph using adjacency
list representation*/
class Graph{
    int V; //no of vertices

    //pointer to an aray containing adjacency lists
    list<int> *adj;
    public:
        Graph(int V);       //Constructor

        //function to add an edge to graph
        void addEdge(int v, int w);

        //print BFS traversal from a given source s
        void BFS(int s);

};

Graph::Graph(int V)
{
    this->V = V;
    adj = new list<int>[V];
}

void Graph::addEdge(int v, int w)
{
    adj[v].push_back(w); //add w to v's list
}

void Graph::BFS(int s)
{
    //Mark all the vertices as not visited
    bool *visited = new bool[V];
    for (int i = 0; i<V; i++)
        visited[i] = false;
    
    //create a queue for BFS
    list<int> queue;

    //mark the current node as visited and enqueue it 
    visited[s] = true;
    queue.push_back(s);

    //'i' will be used to get all adjacent vertices of a vertex
    
}

//Driver program to test methods of graph class
int main()
{
    // Create a graph given in the above diagram
    Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);
 
    cout << "Following is Breadth First Traversal "
         << "(starting from vertex 2) \n";
    g.BFS(2);
 
    return 0;
}