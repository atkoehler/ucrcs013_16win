/// @file eof.cpp
/// @brief Demonstration of eof() and good() with streams
/// @author Adam Koehler
/// @date February 1, 2017

#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

int main()
{
    int x = 0;
    int i = 1;
    ifstream inFile;
    inFile.open("input.txt");
    
    // while(!inFile.eof())
    // {
    //     inFile >> x;
     
    //     // note that this will output
    //     //  just before final cout because as
    //     //  soon as the final input is consumed
    //     //  then good becomes false
    //     if (!inFile.good())
    //         cout << " uh oh " << endl;
        
    //     cout << i <<  "   " << x << endl;
    //     i++;
    // }
    
    // instead of using .good() we can just put
    //  the input directly into our conditional
    while(inFile >> x)
    {
        cout << i <<  ' ' << x << endl;
        i++;
    }
    
    return 0;
}