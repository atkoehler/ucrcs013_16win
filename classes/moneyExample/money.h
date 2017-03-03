/// @author Adam Koehler
/// @date February 24, 2017
/// @brief money class definition for money in class example

#ifndef MONEY_H
#define MONEY_H

class Money {
    private:
        int dollars;
        int cents;
        
        // this is a private function, this means that
        //  a user of the object cannot invoke it directly
        //  such as Money m1; m1.init();
        // Private functions are usually helper functions
        //  for publicly available calls, in this case
        //  init() makes sure that no Money object is 
        //  initialized with over 99 cents because that
        //  should tabulate into the dollars category.
        void init();
        
    public:
        Money();
        
        // without variable names which order the arguments
        //  exist is hard to determine; so is it dollars then cents,
        //  or cents then dollars?
        // variable names are not required but they help avoid
        //  confusing scenarios such as this one
        Money(int, int);
        
        Money(int);
        int convertToCents() const;
        double convertToDollars() const;
        
        // 3 Forms of const
        // const before the return type prevents the
        //      function call from existing on the left
        //      hand side of an assignment statement
        //      as the returned object cannot be changed
        // const as part of a parameter prevents the 
        //      parameter's value from changing
        // const after the parameters list prevents
        //      the function from changing the values of
        //      the object's private data members
        const Money add(const Money &) const;
        
        // operator overloading allows us to use the 
        //  well known operators instead of calling
        //  the function using the dot member function 
        //  invocation style
        //  so: m1.add(m2) becomes m1 + m2
        const Money operator+(const Money &) const;
        
        const Money subtract(const Money &) const;
};
#endif