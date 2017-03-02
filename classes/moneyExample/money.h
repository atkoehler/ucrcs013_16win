/// @author Adam Koehler
/// @date February 24, 2017
/// @brief money class definition for money in class example

#ifndef MONEY_H
#define MONEY_H

class Money {
    private:
        int dollars;
        int cents;
        void init();
    public:
        Money();
        Money(int, int);
        Money(int);
        int convertToCents() const;
        double convertToDollars() const;
        const Money add(const Money &) const;
        const Money operator+(const Money &) const;
        const Money subtract(const Money &) const;
};
#endif