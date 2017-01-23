/// @file split.cpp
/// @brief Using C strings and functions
/// @author Adam Koehler
/// @date January 23, 2017

#include <iostream>

using namespace std;

void splitV1(char[], char[], char[], char);
void splitV2(char[], char[], char[], char);

int main() {
    char str[80] = "The Last Jedi";
    char part1[80] = {0};
    char part2[80] = {0};

    // Split on a space, ' '
    cout << "str: " << str << endl;
    cout << "part1: " << part1 << endl;
    cout << "part2: " << part2 << endl;
    splitV2(str,part1,part2,' ');
    cout << "Calling split(str,part1,part2,' ')" << endl;
    cout << "str: " << str << endl;
    cout << "part1: " << part1 << endl;
    cout << "part2: " << part2 << endl;

    // visually split up cases
    cout << endl;
    cout << endl;
    
    // Split on an asterisk, '*'
    cout << "str: " << str << endl;
    cout << "part1: " << part1 << endl;
    cout << "part2: " << part2 << endl;
    splitV2(str,part1,part2,'*');
    cout << "Calling split(str,part1,part2,'*')" << endl;
    cout << "str: " << str << endl;
    cout << "part1: " << part1 << endl;
    cout << "part2: " << part2 << endl;

}

void splitV1(char str[], char a[], char b[], char delim) 
{
    // a or b cstring index value
    int i = 0;
    
    // offset value for accessing str
    int offset = 0;
    
    // Copy into 'a', no offset needed
    for (i=0; str[i] != '\0' && delim != str[i]; i++)
    {
        a[i] = str[i];
    }
    
    // properly terminate a cstring
    a[i] = '\0';
    
    if (str[i] != '\0')
    {
        // move beyond delimeter
        i++;
        
        // save offset for str access
        offset = i;
        
        // Copy into b using offset to access str
        for (i=0; str[i+offset] != '\0'; i++)
        {
            b[i] = str[i+offset];
        }        

        // properly terminate b cstring
        b[i] = '\0';
    }
    else
    {
        // properly terminate b when nothing gets copied
        b[0] = '\0';
    }
}

void splitV2(char str[], char a[], char b[], char delim) 
{
    bool foundDelimiter = false;
    int ca = 0;
    int cb = 0;
    char current;
    int x = 0;

    while ((current = str[x]) != '\0') {
        if(!foundDelimiter) {
            if(current == delim) {
                foundDelimiter = true;
                x++;
                continue;
            }
            a[ca] = current;
            ca++;
        } else {
            b[cb] = current;
            cb++;
        }
        x++;
    }
   
}