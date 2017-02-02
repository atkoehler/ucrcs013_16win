/// @file recursionIntro.cpp
/// @brief Introduction to the concept of recursion
/// @author Adam Koehler
/// @date February 1, 2017


// Divide & Conquer
// break down and solve smaller problems that together
//      solve the much larger problem
// 
// when to stop? (base case)
// what is the smaller sub-problem or can we ask again to
//      slowly move towards the base case?

#include <iostream>
#include <unistd.h>

using namespace std;


// Acquiring an input - recursively
char getAlphaR()
{
    char c;
    cin >> c;
    
    // base case: when do we stop/return?
    if(isalpha(c))
    {
        return c;
    }
    
    // solve the problem using same function
    getAlphaR();
}



// Acquiring an input iteratively
char getAlpha()
{
    char c;
    cin >> c;
    
    while (!isalpha(c))
    {
        cin >> c;
    }
    
    return c;
    
}


// fib sequence
// 1, 1, 2, 3, 5, 8

// iteratively
// loop over and just calculate one by one
int fibI(int N)
{
    int first = 1;
    int second = 1;
    int num = 0;
    if (N < 3)
    {
        return 1; 
    }
    
    for (int i=3; i <= N; i++)
    {
        num = first + second;
        first = second;
        second = num;
    }
    
    return num;
}


// recursively
// if we want #6 in seq, then sum #4 and #5
int fibR(int n)
{
    // base case?
    if (n == 1 || n == 2)
    {
        return 1;
    }
    
    // smaller problem
    return fibR(n-1) + fibR(n-2);
    
}


int main()
{
    cout << fibI(45) << endl;
    // cout << fibR(45) << endl;
    return 0;
}
