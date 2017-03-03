/// @author Adam Koehler
/// @date February 24, 2017
/// @brief money class main program for money in class example


#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include "money.h"


using namespace std;

int main() {
    Money money = Money(10, 13);
    Money money2 = Money(1, 99);
    cout << money.convertToCents() << endl;
    cout << money.convertToDollars() << endl;
    
    // const return type prevents assignment into
    //      a returned object such as:
    // money.add(money2) = money;
    
    // We cannot do the following either:
    //  7 is a literal so it cannot be changed as it is
    //      not a spot in memory
    // 7 = x + y;
    
    // x+y yields a return value and return values are 
    //  stored in memory, but again const will prevent
    //  alteration and this isn't an object so we could
    //  not change it under normal circumstances as it
    //  is not a named space in memory (variable or object)
    // x + y = 5;
    
    // at() - does not have const in return type
    //      for at least one function implementation
    //      to allow it to exist on the left hand side
    //      of an assignment statement
    // v.at(0) = 5;
    // x = v.at(0);
    
    
    cout << money.add(money2).convertToDollars() << endl;
    cout << (money+money2).convertToDollars() << endl;
    cout << money.subtract(money2).convertToDollars() << endl;
    return 0;
}