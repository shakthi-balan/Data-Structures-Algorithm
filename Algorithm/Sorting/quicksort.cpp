#include<bits/stdc++.h>

using namespace std;

void swap (int* a , int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

/*This function takes last element as pivot , places the pivot element
pivot elemt at its correct position in sorted arrau ,and placs all smaller 
(smaller than pivot) to left of pivot and all greater elements to 
right of pivot*/
int partition(int arr[], int low, int high)
{
    int pivot = arr[high];

    int i = (low-1);

    for(int j = low; j <= high-1; j++)
    {
        //if current element is smaller than the pivot 
        if(arr[j] < pivot)
        {
            i++; //increment element is smaller tha the pivot
            swap(&arr[i], &arr[j]);
        }
    }
    swap (&arr[i+1], &arr[i]);
    return (i+1);

}

/*The Function that implements Quicksort 
arr[] --> Array to be sorted;
low--> starting index;
high --> ending index;*/
void quicksort (int arr[], int low, int high){
    if(low< high)
    {
        //pi (pivot ) is partitioning indexing , arr[p]
        //is now at the right place 
        int pi = partition(arr, low, high);
        
        //seperately sort elements sort elements before
        // partition and after partition
        quicksort(arr, low, pi-1);
        quicksort(arr, pi+1, high);
    }

}

//Function to print an array
void printArray(int arr[], int size)
{
    int i ;
    for(i = 0 ; i < size ; i++)
        cout<< arr[i] << " ";
    
    cout << endl;
}

//Driver code
int main()
{
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) /sizeof(arr[0]);
    quicksort(arr, 0, n-1);
    printArray(arr, n);
    return 0;

}