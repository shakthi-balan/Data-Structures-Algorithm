//A C++ program to demonstrate common Binary heap operation
#include<iostream>
#include<climits>

using namespace std;

//prototype of a utility function to swap two integers
void swap(int *x, int *y);

//A class for min heap
class MinHeap
{
    int *harr; // pointer to array of elements in heap
    int capacity;
    int heap_size;

    public:
        //constructor 
        MinHeap(int capacity);

        void MinHeapify(int);

        int parent(int i ){ return (i-1)/2;}

        //to get inde of left child of node at index i
        int left(int i ){ return (2*i +1 ); }

        //to extract the root which is the minimum element
        int extractMin();

        //decreases key value of key at index i to new_val
        void dereaseKey(int i , int new_val);

        //Returns the minimum key (key at root ) from min_heap
        int getMin() { return harr[0]; }

        //Deletes a key stored at index i
        void deleteKey(int i );

        //Inserts a new key 'k'
        void insertKey(int k);

}; 

//constructor : Builds a heap from a given array a[] of given size
MinHeap::MinHeap(int cap)
{
    head_size = 0;
    capacity = cap;
    harr = new int[cap]
}

//Inserts a new key 'k'
void MinHeap::insertKey(int k)
{
    if(heap_size == capacity)
    {
        cout << "\n overflow: could not insertKey \n";
        return ;
    }

    //First insert new key at the end
    heap_size++;
    int i = heap_size -1;
    harr[i] = k;

    //Fix min heap property if it is violated
    while( i != 0 && harr[parent(i)]> harr[i])
    {
        swap(&harr[i], &harr[parent(i)]);
        i = parent(i);
    }
}

// decreases value of key at index 'i' to new_val . It is assumed that 
// new_val is smaller than harr[i]
void MinHeap::decreaseKey(int i, int new_val)
{
    harr[i] = new_val;
    while( i != 0 && harr[parent(i)] > harr[i])
    {
        swap( &harr[i], &harr[parent(i)]);
        i = 
    }
}


//Driver code
int main()
{
    MinHeap h(11);
    h.insertKey(3);
    h.insertKey(2);
    h.deleteKey(1);
    h.insertKey(15);
    h.insertKey(5);
    h.insertKey(4);
    h.insertKey(45);
    cout << h.extractMin() << " ";
    cout << h.getMin() << " ";
    h.decreaseKey(2, 1);
    cout << h.getMin();
    return 0;
}
