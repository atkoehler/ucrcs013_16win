/// @file recursionPrint.cpp
/// @brief Recursive array/tree node value output
/// @author Adam Koehler
/// @date February 9, 2017

#include <iostream>
using namespace std;

// printing an array can be done in many ways
//  in this function we recursively print an
//  array that may also be visually represent
//  as a binary tree containing a root node with
//  several descendants to create a full tree
void print(int arr[], int size, int curNode) {
    int leftChild, rightChild;
    
    // calculate the array index values for
    //  the left and right child nodes of the
    //  current node
    leftChild = curNode * 2 + 1;
    rightChild = curNode * 2 + 2;
    
    // print out the current node
    // if we move this print around, we may
    // get different results as shown in class
    cout << arr[curNode] << ' ';
        
    // base case: determine if the current
    //              node has any children
    //            when no children exist, return
    if (leftChild >= size && rightChild >= size) 
    {
        return;
    }
    
    // recurse on the index of the left child
    print(arr, size, leftChild);
    
    // recurse on the index of the right child
    print(arr, size, rightChild);
    
    return;
}

int main()
{
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    
    print(arr, 7, 0);
    cout << endl;

    return 0;
}