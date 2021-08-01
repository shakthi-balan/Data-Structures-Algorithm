//C++ program for implementation of selevction sort
#include<bits/stdc++.h>

using namespace std;

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp ;

}

void selectionSort(int arr[], int n)
{
    int i, j, min_idx;
    for(i = 0; i< n; i++)
    {
        //one by one move boundary of unsorted subarray
        min_idx = i;
        for (j = i+1 ; j < n; j++)
            if( arr[j] <arr[min_idx])
                min_idx = j;

        //swap the found minimum with first element 

        swap(&arr[min_idx], &arr[i]);

    }
    
}

//function to print the array 
void printArray(int arr[], int size)
{
    int i ;
    for (i=0; i < size; i++)
        cout << arr[i] << " ";
    
    cout << endl;
}

//Driver program to test above functions 
int main()
{
     int arr[] = {64, 25, 12, 22, 11}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    selectionSort(arr, n); 
    cout << "Sorted array: \n"; 
    printArray(arr, n); 
    return 0; 
}