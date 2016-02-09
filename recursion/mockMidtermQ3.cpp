#include <iostream>
#include <unistd.h>

using namespace std;

int multiply(int a, int b)
{
    // handle potential negative numbers
    if (b < 0)
    {
        b = -b;
        a = -a;
    }
    
    // base case
    if (b==0)
    {
        return 0;
    }
    
    // add a to itself b times
    return a + multiply(a, b-1);
}

int main()
{
    cout << multiply(0,0) << endl;
    return 0;
}