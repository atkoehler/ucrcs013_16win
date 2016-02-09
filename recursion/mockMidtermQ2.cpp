#include <iostream>
#include <unistd.h>

using namespace std;

void preOP(int arr[], int size, int curNode)
{
    // Determine indices of children
    int leftChild, rightChild;
    leftChild = curNode * 2 + 1;
    rightChild = curNode * 2 + 2;
    
    // Pre order says we print current node before recurse
    cout << arr[curNode] << ' ';
    
    // Base Case
    // If child is an invalid index, no recursion
    if (leftChild >= size || rightChild >= size)
    {
        return;
    }

    // Recurse on the left child
    preOP(arr, size, leftChild);
    
    // Recurse on the right child
    preOP(arr, size, rightChild);
}


int main()
{
    int arr[15] = 
        {1, 2, 9, 3, 6, 10, 13, 4, 5, 7, 8, 11, 12, 14, 15};
    
    preOP(arr, 15, 0);
    cout << endl;
    return 0;
}