/// @file practiceQuestion_week1.cpp
/// @brief Solution to midterm example question for week 1.
///     The solution is only the removeVal function.
/// @author Adam Koehler
/// @date January 13, 2017

#include <vector>
#include <iostream>

using namespace std;

// remove the number from the vector
void removeVal(vector<int> &v, int num)
{
    int location = -1;
    
    // discover the location of the vector
    // add location == -1 to condition to stop the loop
    //      as soon as the number is found, to not look
    //      at extra vector elements
    for (int i=0; location == -1 && i < v.size(); i++)
    {
        // found number?
        if(v.at(i) == num)
        {
            location = i;
        }
    }

    // remove the item that was discovered
    if (location != -1)
    {
        // Option 1: slide all items after location forward
        for (int i = location+1; i < v.size(); i++)
        {
            v.at(i-1) = v.at(i);
        }
        
        
        // Option 2: swap the location with the last element
        //      This option is bad if the vector is sorted
        //      because the vector will become unsorted
        // swap(v.at(i), v.at(v.size() - 1));
        
        // remove the last element of the vector
        // reducing the vector size by 1
        v.pop_back();
    }
}

void printVec(const vector<int> &v)
{
    for (int i = 0; i < v.size(); ++i)
    {
        cout << v.at(i) << ' ';
    }
}

int main()
{
    vector<int> v(5);
    v.at(0) = 1;
    v.at(1) = 9;
    v.at(2) = 7;
    v.at(3) = 23;
    v.at(4) = 13;
    
    cout << "Before: " << endl;
    printVec(v);
    cout << endl;
    
    removeVal(v, 2);
    
    cout << "After: " << endl;
    printVec(v);
    cout << endl;

    return 0;    
}