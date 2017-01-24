/// @file numberSplit.cpp
/// @brief splitting an array in two
/// @author Adam Koehler
/// @date January 23, 2017

#include <iostream>
using namespace std;


void oddEvenSplit(const int arr[], int odd[], int even[],
    int arrSz, int & oddSz, int & evenSz)
{
    oddSz = 0;
    evenSz = 0;
    
    for (int i=0; i < arrSz; ++i)
    {
        if (arr[i] % 2 == 0)
        {
            even[evenSz] = arr[i];
            ++evenSz;
        }   
        else
        {
            odd[oddSz] = arr[i];
            ++oddSz;
        }
    }
}

void display(const int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << ' ';
    }
}

int main()
{
    const int N = 5;
    int oddSize = 0, evenSize = 0;
    int arr[N] = {1, 2, 3, 4, 5};
    int odd[N];
    int even[N];

    display(arr, N);
    cout << endl;
    
    oddEvenSplit(arr, odd, even, N, oddSize, evenSize);
    
    display(odd, oddSize);
    cout << endl;
    
    display(even, evenSize);
    cout << endl;
    
    return 0;
}