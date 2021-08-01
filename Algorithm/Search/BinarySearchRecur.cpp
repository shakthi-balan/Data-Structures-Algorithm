//C++ program to implement recursive Bianry tree Search

#include <bits/stdc++.h>
using namespace std;

// A recursive Binary search function
// returns location of x in goven array 
// arr[1,..., r] is present , otherwise -1

int binarySearch(int arr[], int i, int r, int x)
{
    if (r >= l){
        int mid = l + ( r-l) / 2;

        //if the element is present at the middle itself
        if (arr[mid] ==x )
            return mid;
        
        if ( x < arr[mid] )
            return binarySearch(arr, l, mid-1, x);
        
        //Else the element can only be present in right subarray
        return binarySearch(arr, mid + 1, r, x);
    
    }
    //We reach here when element is not present in array
    return -1;

}

int main(void )
{
    int arr[] = {2,3, 4, 10 , 40};
    int x = 10;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = binarySearch(arr, 0, n-1, x);
    (result == -1) ? cout << "Element is not present in array"
                    :cout <<"Element is present at index"<< result;
                
    return 0;
}