/// @file recursionCString.cpp
/// @brief Recursive C string printing
/// @author Adam Koehler
/// @date February 9, 2017

#include <iostream>
using namespace std;

// print a c-string recursively
// our goal is to implement:
//    void printCstring(const char a[])
// However, upon initial layout we 
//  determine that we need to have an
//  additional parameter to the function.
//  So we define a helper function, and
//  call it from within our primary function
//  with an initial value for the additional
//  parameter.

// helper function takes an integer
//  this integer is the current index
//  that the function is evaluating to 
//  determine if it is the end of the 
//  c-string or if the value should be
//  output.
void printCstringHelp(const char a[], int i){
    
    // base case
    //  the end of the c-string, null,
    //  is in the current index's element
    if(a[i] == '\0')
    {
        return;
    }
    
    // logic/implementation
    // our only logic for this function
    // is to output the value for 
    // spot i in the array
    cout << a[i] << ' ';
    
    // recursive step/call
    // move the problem closer to the
    //  base case by reducing the problem
    //  space, in this case moving to 
    //  the next index in the array
    printCstringHelp(a, i+1);
}

// this is the print function we were
//  told to write, but we needed a helper
//  function to actually write it recursively
void printCstring(const char a[])
{
   printCstringHelp(a, 0);
}

// simple main to call our function
int main()
{
    char c[4] = "bob";

    printCstring(c);   
    cout << endl;

    return 0;
}