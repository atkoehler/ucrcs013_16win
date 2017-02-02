/// @file boundsRevisited.cpp
/// @brief Bounds and short circuiting with arrays
/// @author Adam Koehler
/// @date January 25, 2017

// declare a 2D array
char puzzle[numRows][numCols];

// to debug always put an endl so that items 
// are sent output prior to any exceptions
// or segmentation faults
cout << "a" << endl;
puzzle[-100][-100];  // may cause seg fault

// bounds are important - 2D array bounds: 
// min 0, 0
// max numRows, numCols

// normally we stay in bounds by starting
//  with a valid number in our loop and iterating
//  over all valid numbers stopping on the first
//  invalid number
i = 0 ; i < numRows;

// However, if we alter our access, we are no
//  longer protected by these normal boundary checks
puzzle[i+1][j];

// We must check that new value to avoid going
//  out of bounds when we are calculating a new value
if((i+1) < numRows))
{
    puzzle[i+1][j];
}

// short circuiting
// stopping before all expressions in an && or || are 
// evaluated

// When x < y is false, the computer will not 
//  calculate the other comparisons because
//  false && anything is false.
x<y && y<z && y<x

// So we can use this principle to check our
//  bounds prior to accessing an array or vector
(i+1) < numRows && puzzle[i+1][j] == 'd'
