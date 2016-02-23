#include "money.h"

using namespace std;

Money::Money() {
    this->dollars = 0;
    this->cents = 0;
}

Money::Money(int d, int c) {
    dollars = d;
    cents = c;    
    init();
}

Money::Money(int c) {
    dollars = 0;
    cents = c;
    init();
}

void Money::init() {
    if (cents >= 100)
    {
        dollars += cents / 100;
        cents = cents % 100;
    }
}

int Money::convertToCents() const {
    return dollars * 100 + cents;
}

double Money::convertToDollars() const {
    return dollars + cents / 100.0;
}

const Money Money::add(const Money &rhs) const {
    return Money(convertToCents() + rhs.convertToCents());
}

const Money Money::subtract(const Money &rhs) const {
    Money r = Money(convertToCents() - rhs.convertToCents());
    return r;
}