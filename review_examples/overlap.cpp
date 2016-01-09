/// @file overlap.cpp 
/// @brief Overlap code for in class example.
/// 
/// @author Adam Koehler [akoeh001@cs.ucr.edu]
/// @date January 8, 2016

#include <iostream>
using namespace std;

int determineOverlap(const string &, const string &);
int determinePrefixOverlap(const string &, const string &);
int determineSuffixOverlap(const string &, const string &);
void printResult(const string &, const string &, int);
void storeIfLarger(const string &, int, string &, int &);

int main()
{
    // result variables
    string key1, key2, key3;
    string largest1 = "No Match", largest2 = "No Match", largest3 = "No Match";
    int overlap1 = 0, overlap2 = 0, overlap3 = 0;
    
    // comparison variables
    string compare;
    int overlapSize = 0;
    
    // Acquire all the key values
    cin >> key1 >> key2 >> key3;
    
    // Acquire a word from the block of words one-by-one and calculate.
    while (cin >> compare)
    {
        overlapSize = determineOverlap(key1, compare);
        storeIfLarger(compare, overlapSize, largest1, overlap1);
        
        overlapSize = determineOverlap(key2, compare);
        storeIfLarger(compare, overlapSize, largest2, overlap2);
        
        overlapSize = determineOverlap(key3, compare);
        storeIfLarger(compare, overlapSize, largest3, overlap3);
    }
    
    // Print the results
    printResult(key1, largest1, overlap1);
    cout << endl;
    printResult(key2, largest2, overlap2);
    cout << endl;
    printResult(key3, largest3, overlap3);
    
    return 0;
}

/// @brief determines the actual overlap for a word by utilizing helpers
/// @param key the key that will attempted to be overlapped
/// @param compare the string that contains the potential overlap
/// @return the numerical size of the overlap between key and compare strings
int determineOverlap(const string &key, const string &compare)
{
    int prefixOverlap = 0, suffixOverlap = 0;
    
    prefixOverlap = determinePrefixOverlap(key, compare);
    suffixOverlap = determineSuffixOverlap(key, compare);
    
    if (prefixOverlap > suffixOverlap)
        return prefixOverlap;
    else
        return suffixOverlap;
}

/// @brief determines the size of the overlap on the front end of the word
/// @param key the key that will attempted to be overlapped
/// @param compare the string that contains the potential overlap
/// @return the numerical size of the overlap between key and compare strings
int determinePrefixOverlap(const string &key, const string &compare)
{
    int overlapSize = key.size();
    string compareOverlap, keyOverlap;
    
    if (compare.size() < key.size())
    {
        overlapSize = compare.size();
    }
    
    for(; overlapSize >= 0; overlapSize--)
    {
        compareOverlap = compare.substr(0, overlapSize);
        keyOverlap = key.substr(key.size() - overlapSize);
        
        if (keyOverlap == compareOverlap)
            break;
    }

    return overlapSize;   
}

/// @brief determines the size of the overlap on the back end of the word
/// @param key the key that will attempted to be overlapped
/// @param compare the string that contains the potential overlap
/// @return the numerical size of the overlap between key and compare strings
int determineSuffixOverlap(const string &key, const string &compare)
{
    int overlapSize = key.size();
    string compareOverlap, keyOverlap;
    
    if (compare.size() < key.size())
    {
        overlapSize = compare.size();
    }
    
    for(; overlapSize >= 0; overlapSize--)
    {
        compareOverlap = compare.substr(compare.size() - overlapSize);
        keyOverlap = key.substr(0, overlapSize);
        
        if (keyOverlap == compareOverlap)
            break;
    }

    return overlapSize;
}

/// @brief prints the result for a single key
/// @param key the key that was being compared to determine largest overlap
/// @param largest the string that had the largest overlap with the key
/// @param overlapSize the numerical size of the largest overlap
void printResult(const string &key, const string &largest, int overlapSize)
{
    cout << "Key: " << key << endl;
    cout << "Match: " << largest << endl;
    cout << "Overlap: " << overlapSize << endl;
}


/// @brief based on the comparison integers, stores the larger int and
///        associated string
/// @param compare the string associated with the integer to compare 
/// @param overlapSize the overlap size associated with the compare string
/// @param largest the current string with the largest overlap
/// @param largestOverlap the largest numerical overlap at present
void storeIfLarger(const string &compare, int overlapSize, string &largest, 
    int &largestOverlap)
{
    if (overlapSize > largestOverlap)
    {
        largestOverlap = overlapSize;
        largest = compare;
    }
}