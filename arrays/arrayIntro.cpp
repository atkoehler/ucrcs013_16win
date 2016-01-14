#include <iostream>

using namespace std;


// void display(int arr[])
void display(int arr[], int size)
{
    //for (int i=0; i < ???; i++)
    for (int i=0; i < size; i++)
    {
        cout << arr[i] << ' ';
    }
}

// selection sort
void selSort(int arr[], int size)
{
    
    
}

int main()
{
    const int CAPACITY = 100;
    int arr[CAPACITY];  
    int arr1Size = 0;
    // Six is a "magic number", we don't generally like "magic numbers"
    
    int arr2[10];
    
    arr[0] = 5;
    arr1Size++;
    cout << "Enter in 5 integers: ";
    for (int i=1; i < 6; i++)
    {
        cin >> arr[i];
        arr1Size++;
        // arr[i] = i;
    }
    cout << endl;
    
    // Why not pass by reference?
    // Outputting an array by itself, and you see the array is 
    //  an address already!
    cout << "print out array, no subsript operator:" << endl;
    cout << arr << endl << endl;
    
    cout << "arr1 to size:" << endl;
    display(arr, 6);
    cout << endl;
    cout << endl;
    
    cout << "arr1 beyond size:" << endl;
    display(arr, CAPACITY);
    cout << endl;
    cout << endl;

    
    cout << "arr2:" << endl;
    display(arr2, 10);
    cout << endl;
    cout << endl;
    
    // How much space does an array take up?
    //      The same amount that the items take up, so if an 
    //      integer is 4 bytes and you have 10, thats 40 bytes.

    return 0;
}
