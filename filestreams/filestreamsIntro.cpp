/// @author Adam Koehler
/// @date January 25, 2016
/// @brief Introduction to filestreams and command line arguments

#include <iostream>
#include <cstdlib>
#include <fstream>

using namespace std;

// void dataEntry()
void dataEntry(string filename)
{
    // if we receive the filename via parameter then we don't need
    //  to acquire it via input
    // string filename;
    // cout << "Enter a file name: ";
    // cin >> filename;
    
    // We must choose an output file steam or an input file stream
    // ofstream fileData;
    ifstream fileData;
    
    // We could hard code the filename, if we didn't use a string
    // fileData.open("data.txt");
    
    // Open the file and convert the string to cstring with c_str()
    fileData.open(filename.c_str());
    
    // Make sure the file was opened!
    if (!fileData.is_open())
    {
        cout << "Error " << filename << " failed to open!";
        cout << endl;
        exit(0);
    }
    
    // We need some sort of variable to read into, we are 
    //  expecting integers in this example, so int will do.
    int n = 0;
    
    // this looks a lot like the while (cin >> n) we used previously
    // the loop will continue gathering input until the end of file
    while (fileData >> n)
    {
        cout << n << endl;
        // Remember endl forces everything out immediately (flushes),
        //  so if our program crashes, we will know more precisely
        //  when the crash occurred.
    }
    
    // A proper file read/write always closes the file when complete
    fileData.close();
}

// to add command line arguments we add two argumennts to main
// argc is the count of arguments
// argv is an array of cstrings
// int main(int argc, char argv[][])
int main(int argc, char * argv[])
// int main()
{
    // Output the first cstring from command line arguments
    cout << argv[0] << endl;
    
    // Output the second cstring from command line arguments
    cout << argv[1] << endl;
    
    // This debug statement will not print when only 1 item
    //  exists in argv (no extra command line arguments were given)
    cout << "after arg 1" << endl;
    
    // to prevent crashing, we could wrap argv[1]'s access
    // the following check would go prior to the argv[1] access
    if (argc != 2)
    {
        cout << "Must specify file via command line argument" << endl;
        return 0;
    }
    
    // perform input and file output and provide the filename
    //  that was given at the command line
    dataEntry(argv[1]);
    
    // If we did all the filename acquisition via cin we could 
    //  do it in the function and then no arguments would be
    //  needed when invoking dataEntry
    // dataEntry();
    
    return 0;
}