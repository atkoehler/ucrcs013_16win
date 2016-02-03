/// @author Adam Koehler
/// @date February 1, 2016
/// @brief Introduction to recursion

#include <iostream>
using namespace std;
#include <unistd.h>

// given n, return n!
int factorial (int n)
{
    // int fac = 1;
    // // iterative
    // for (int i=1; i <= n; i++)
    // {
    //     fac *= i;
    // }
    
    // recusion - 2 things
    
    // base case
    // n is 0 - return 1
    if (n == 0)
    {
        return 1;
    }
    
    // recursive step 
    // getting a slightly smaller problem and solving that
    // n
    // * n-1*n-2*...*1
    // cout << n << endl;
    // sleep(1);
    return n * factorial(n-1);
}

int getNum()
{
    int n;
    
    // // Acquire non-negative integer
    // do
    // {
    //     cout << "Enter a non-negative integer: ";
    //     cin >> num;
    //     cout << endl;
    // }while (num < 0);
    
    // return num;
    
    cin >> n;
    
    // base case
    if (n >= 0)
    {
        return n;
    }
    
    return getNum();
}

// 1. getnum
// 2. -5
// 3. getnum
// 4. 5


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