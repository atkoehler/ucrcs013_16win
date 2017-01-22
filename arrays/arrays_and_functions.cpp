/// @file arrays_and_functions.cpp
/// @brief Utilizing arrays with functions
/// @author Adam Koehler
/// @date January 20, 2017

#include <iostream>

using namespace std;

/// @brief display the array to standard output
/// @param arr an array of integers passed by 
///             constant reference
/// @param size the size of the array and 
///             the number of inputs to acquire
//
//  Note that we have to pass the size of the array
//      because arrays do not have member functions,
//      and therefore we need to let the function
//      know how large the array is or can be.
//  Note that we do not use & anywhere, but the 
//      array is passed by constant reference. 
//      We use const here because the array should
//      not be changed by the display function as 
//      its purpose is simply to use the array.
//      We will learn more about why we do not use
//      the & with arrays in in the pointers chapter.
void display(const int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << ' ';
    }
}


/// @brief fills an array with values from input
/// @param arr an array of integers passed by reference
/// @param size the size of the array and 
///             the number of inputs to acquire
//
//  Note that we have to pass the size of the array
//      because arrays do not have member functions,
//      and therefore we need to let the function
//      know how large the array is or can be.
//  Note that we do not use & anywhere, but the 
//      array is passed by reference. We will learn
//      more about this in the pointers chapter.
void fillArr(int arr[], int size)
{
    
    for (int i = 0; i < size; ++i)
    {
        cin >> arr[i];    
    }    
}

int main ()
{
    // define a constant to make future changes easy
    const int N = 5;
    
    // declare an array of integers of size N
    //  since we don't use {0} or some variation
    //  the initial values of the array are garbage
    int arr[N];
    
    // Call the function fillArr to fill the array
    //  Note that when we invoke the function we 
    //  simply utilize the array variable name.
    //  We do not have [] or int or any other type
    //  defining terms.
    fillArr(arr, N);
    
    // Display the array to the screen
    display(arr, N);
    
    cout << endl;
    return 0;
}