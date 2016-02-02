/// @author Adam Koehler
/// @date February 1, 2016
/// @brief Introduction to recursion

#include <iostream>
using namespace std;


// given n, return n!
int factorial (int n)
{
    // write the code for this function
    return 0;
}

int getNum()
{
    int num;
    
    // Acquire non-negative integer
    do
    {
        cout << "Enter a non-negative integer: ";
        cin >> num;
        cout << endl;
    }while (num < 0);
    
    return num;
}

int main()
{
    int num; 
    int fact;
    
    // Acquire integer
    num = getNum();
    
    // Calculate the factorial
    fact = factorial(num);
    
    cout << "The factorial of " << num << " is: ";
    cout << fact << endl;
}