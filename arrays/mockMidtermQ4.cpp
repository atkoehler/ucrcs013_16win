#include <iostream>
#include <unistd.h>

using namespace std;

int cstringFind(const char arr[], char toFind)
{
    int index = -1;
    
    for(int i=0; arr[i] != '\0'; i++)
    {
        if (toFind == arr[i])   
        {
            index = i;
        }
    }
    
    return index;
}


int main()
{
    char arr1[6] = "hello";
    char arr2[10] = "color";
    char arr3[10] = "bocci";
    
    cout << "hello, index: " << cstringFind(arr1, 'c') << endl;
    cout << "color, index: " << cstringFind(arr2, 'c') << endl;
    cout << "bocci, index: " << cstringFind(arr3, 'c') << endl;
    return 0;
}