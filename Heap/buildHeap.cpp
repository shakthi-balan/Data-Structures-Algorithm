//C++ program for building Heap from Array

#include<iostream>

using namespace std;

//to heapify a subtree rooted with node i which is an 
//in arr[]. N is size of heap
void heapify(int arr[], int n, int i)
{
    int largest = i;
    int l = 2*i + 1;
    int r = 2*i +2; //right = 2*i + 2
    
    //If left child is larger than root
    if (l < n && arr[l]> arr[largest])
        largest = l;
    
    //if right child is larger
    if (r < n && arr[r]> arr[largest])
        largest = r;
    
    //if largest is not root
    if(largest != i){
        swap(arr[i], arr[largest]);

        //recursively heapify the affected sub-tree
        heapify(arr, n , largest);
    }   
}

//Function to build Max-Heap from the given array
buildHeap(int arr[], int n)
{
    //Index of last non-leaf node
    int startIdx = (n/2) - 1;

    //Perform reverse level order traversal 
    //from last non-leaf node and heapif each node
    for( int i = startIdx; i >= 0; i--){
        heapify( arr, n, i);
    }
}
//Driver code
int main()
{
    int arr[] = { 1, 2, 3, 5, 4, 6, 13, 10, 9, 8, 15, 17 };

    int n = sizeof(arr)/sizeof(arr[0]);

    buildHeap(arr, n);

    printHeap(arr, n);
}