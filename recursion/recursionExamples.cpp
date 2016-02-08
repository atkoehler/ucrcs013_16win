/// @author Adam Koehler
/// @date February 3, 2016
/// @brief A more advanced look at recursion and opportunities to use it

#include <iostream>
using namespace std;
#include <unistd.h>


// sum the numbers from 1 to N using binary recursion similar to tree
//      traversal
// s is small, l is large
int sumSplit(int s, int l)
{
    int firstHalf, secondHalf;
    
    // when the numbers match, we are at a known sum
    if (l == s)
    {
        return s;
    }
    
    // calculate the sum of the left half
    cout << "sumN(" << s << ", " << (l+s)/2 << ")" << "   ";
    firstHalf = sumSplit(s, (l+s)/2);
    
    cout << endl;
    
    // calculate the sum of the right half
    cout << "sumN(" << (l+s)/2 + 1 << ", " << l << ")" << "   ";
    secondHalf = sumSplit((l+s)/2 + 1, l);
    cout << endl;
    
    // return the sum of the two halves
    return firstHalf + secondHalf;
}


// sum the numbers from 1 to N using tail recursion
// s is small, l is large
int sumN(int s, int l)
{
    if (s == l)
    {
        return s;
    }
    
    cout << "sumN(" << s << ", " << l-1 << ")" << "   ";
    return l + sumN(s, l-1);
}

int getNum()
{
    int n;
    
    // Iterative fashion of acquiring a number in a desired range
    // // Acquire non-negative integer
    // do
    // {
    //     cout << "Enter a non-negative integer: ";
    //     cin >> num;
    //     cout << endl;
    // }while (num < 0);
    // return num;

    // Recursive fashion of acquiring a number in a desired range    
    cin >> n;
    
    // base case: the number fits in the desired range
    if (n >= 0)
    {
        return n;
    }
    
    // the number did not fit in the range, get another number
    return getNum();
}

int main()
{
    int num1, num2; 
    int sum;
    
    // Acquire integers
    num1 = getNum();
    num2 = getNum();
    
    
    // Calculate the sum of numbers between S and L inclusive
    cout << "sumN(" << num1 << ", " << num2 << ")" << endl;
    sum = sumSplit(num1, num2);
    
    // Output the results to the screen
    cout << "The sum from " << num1 << " to " << num2 << " is: ";
    cout << sum << endl;
}