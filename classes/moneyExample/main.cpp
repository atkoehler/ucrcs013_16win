#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "money.h"

using namespace std;

int main() {
    Money money = Money(10, 13);
    Money money2 = Money(1, 99);
    cout << money.convertToCents() << endl;
    cout << money.convertToDollars() << endl;
    // money.add(money2) = money;
    // 7 = x + y;
    // x + y = 5;
    
    
    cout << money.add(money2).convertToDollars() << endl;
    cout << money.subtract(money2).convertToDollars() << endl;
    return 0;
}