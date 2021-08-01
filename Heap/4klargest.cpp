//find the k largest numbers in an array
#include<iostream>
using namespace std;

//swap function to interchange value of 
// variables x and y
int swap(int& x, int& y)
{
    int temp =x ;
    x = y ;
    y = temp;
}

//min Heap class 
//arr holds reference to an integer array size 
//indicate the number of elements in MIn heap
class MinHeap{
    int size;
    int* arr;

    public :
        //Constructor to initialize the size and arr
        MinHeap(int size , int input[]);

        //Min Heapify function , that assumes that 2*i+1 and 2*i+2
        //are min heap and fi the 
        void heapify(int i);
        
        //Build the min heap, by calling heapify for all nonleaf node
        void buildHeap();

};

//Constructor to initialize data members and creatng min heap
