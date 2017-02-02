/// @file fileStreamIntro.cpp
/// @brief Introduction to file streams
/// @author Adam Koehler
/// @date January 30, 2017

#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

// using command line arguments
int main(int argc, char *argv[])
{
    string filename;
    int x;
    
    ifstream inFile;
    ofstream outFile;
    
    cout << argv[0] << endl;
    cout << argv[1] << endl;
    
    inFile.open(argv[1]);
    outFile.open("output.txt");
    // did the file open?   
    if(!inFile.is_open())
    {
        cout << "Could not open input file: ";
        cout << argv[1] << endl;
        return 0;   
    }
    
  

    inFile >> x;

    cout << x << endl;


    outFile << endl << endl << x << argv[0];
    inFile.close();

    outFile.close();
        
    
    
    
    return 0;
    
    
}#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

// using command line arguments
int main(int argc, char *argv[])
{
    string filename;
    int x;
    
    ifstream inFile;
    ofstream outFile;
    
    cout << argv[0] << endl;
    cout << argv[1] << endl;
    
    inFile.open(argv[1]);
    outFile.open("output.txt");
    // did the file open?   
    if(!inFile.is_open())
    {
        cout << "Could not open input file: ";
        cout << argv[1] << endl;
        return 0;   
    }
    
  

    inFile >> x;

    cout << x << endl;


    outFile << endl << endl << x << argv[0];
    inFile.close();

    outFile.close();
        
    
    
    
    return 0;
    
    
}