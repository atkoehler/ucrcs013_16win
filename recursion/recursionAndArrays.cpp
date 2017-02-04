/// @file recursionAndArrays.cpp
/// @brief Displaying arrays in various ways 
///         using recursive functions
/// @author Adam Koehler
/// @date February 3, 2017


// Recall: 
//  Recursive algorithms attempt to solve a by moving
//  towards a base case, in many situations (not all)
//  this means putting together solutions to smaller
//  sub problems to the original problem.

// So always ask the questions to get our two steps:
// What is our base case?  Do we have multiple base cases?
// How can repeat the same steps on the same or similar 
//  problem such that we "move" towards the base case?


#include <iostream>
using namespace std;

void displayRecursive(const int[], int, int);
void displayReverseRecursive(const int[], int, int);
void displayReverseRecursive2(const int[], int, int);

// outward facing / public function
// this is the display function another function would call
void display(const int arr[], int size)
{
    // When implementing you would only do recursive or
    //  iterative, so you wouldn't have both. Both are left
    //  here to allow construction of methodology to go
    //  from iterative implementations to recursive ones.
    
    // Iterative implementation
    cout << "Iterative display:" << endl;
    
    // Use a loop to output each element of the array
    for (int i = 0; i < size; ++i)
    {
        cout << arr[i] << ' ';
    }
    
    
    cout << endl << endl << "Recursive display:" << endl;
    // Recursive implementation: use a helper function to 
    //  allow passing of the current location 
    displayRecursive(arr, size, 0);
    
    
    cout << endl << endl << "Reverse recursive display:" << endl;
    // Recursive implementation: use a helper function to 
    //  allow passing of the current location
    
    // recurses fully through the array then starts outputing
    displayReverseRecursive(arr, size, 0);
    
    cout << endl << endl << "Reverse recursive display #2:" << endl;
    // counts backwards moving the current location to the 
    // beginnnig of the array
    displayReverseRecursive2(arr, size, size-1);
}

void displayRecursive(const int arr[], int size, int position)
{
    // base case: we have gone past the final valid spot in
    //            our array, so we are done recursing
    if (size == position)
    {
        return;
    }
    
    // output the value in the array at the current position
    cout << arr[position] << ' ';
    
    // recursive step: move the current position marker closer
    //                 to the end of the array
    displayRecursive(arr, size, position+1);
}



void displayReverseRecursive(const int arr[], int size, int position)
{
    // base case: we went just beyond the end of the array
    if (size == position)
    {
        return;
    }
    
    // recurse to the next position, this will keep recursing
    // until the base case is hit, then that base case call
    // will return to whomever call it and that function
    // will proceed to the next line of code (cout) after
    // the function call
    displayReverseRecursive(arr, size, position+1);
    
    // Now output the value at the current position in the array
    // The first time this code will be reached will be within
    //  the function space where position is the last valid index
    //  into the array.
    cout << arr[position] << ' ';
}

void displayReverseRecursive2(const int arr[], int size, int position)
{
    // base case: we went just before the beginning of the array
    if (-1 == position)
    {
        return;
    }
    
    // output the current position's value in the array
    cout << arr[position] << ' ';
    
    // recurse towards the beginning of the array
    displayReverseRecursive2(arr, size, position-1);
}

int main()
{
    // define an array of integers
    const int size = 5;
    int a[size] = {1, 3, 7, 5, 2};
    
    // invoke the display function
    // NOTE: main has no idea whether the display function
    //          is iterative or recursive
    display(a, size);
    
    cout << endl;
    return 0;
}
