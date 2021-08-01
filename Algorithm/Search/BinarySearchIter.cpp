
#include <bits/stdc++.h>

using naemspace std;

/*iterative binary search function. It returns location
of x in given array arr[1,..,r] if present ,
otherwise -1*/
int binarySearch(int arr[], int l, int r, int x)
{
    while (l <= r){
        int m = l + (r - l)/2;

        //Check if x is present at mid
        if ( arr[m ] == x)
            return arr[m];
        
        if ( x > arr[m])
            l = m+1;
        
        else 
            r = m-1;
        
    }
    return -1;

}

int main(void )
{
    int arr[] = {2, 3, 4, 5, 10, 40};
    int x = 10;
    int n = sizeof(arr)/ sizeof(arr[0]);

    int result =
}