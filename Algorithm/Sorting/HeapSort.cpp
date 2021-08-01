//C++ program for implementation
#include<iostream>
#include<climits>

using namespace std;

//To heapify a subtree rooted with node i whihc is 
// an index in arr[]. n is size of heap
void heapify(int arr[], int n, int i)
{
    int largest = i;
    int l = 2 * i + 1; // left = 2*i +1
    int r = 2 * i + 2; // right = 2 * 1 + 2

    //if left child is larger than root
    if(l < n && arr[l] > arr[largest])
        largest = l;

    // If right child is larger than largest so far
    if ( r<n && arr[r] > arr[largest])
        largest = r;

    // If largest is not root
    if(largest != i){
        swap(arr[i], arr[largest]);

        heapify(arr,n largest);
    }
}