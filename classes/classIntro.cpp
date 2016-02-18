/// @author Adam Koehler
/// @date February 17, 2016
/// @brief Introduction to OOP with classes

// member functions... can't build our own with structs
#include <iostream>
#include <cmath>

using namespace std;

class Point
{
    // the internals are known by the program 
    //      that designs the classes, this stuff
    //      goes in the private area
    private: 
        double x; 
        double y;
    
    // the public interface is what everyone can
    //      use, accessing and manipulating data
    //      directly is less secure and depending
    //      on the data or usage then it can 
    //      very complicated for everyone to 
    //      understand it all.
    //  For example: you can drive a car, but
    //      you may not know how the combustion 
    //      engine works.
    //  For example: Graphics APIs and Engines
    //      Fallout 4 !?
    
    // the user and external interaction is
    //      through a public interface, someone
    //      using this should not need much
    //      (if any) knowledge of the private data
    public:
        Point();    // default constructor
        double getX() const;
        double getY() const;
        void setX(double);
        void setY(double);
        
        // this version of const means that 
        //      the values of private data will
        //      not be mutated (changed)
        void display() const;
        
        void move(double, double);
        
        // how should we pass an object?
        double distance(const Point &);
        // double distance(Point *);
};

void Point::setX(double x)
{
    // scope is important here, what
    // variables exist?
    
    // this refers to the implicit parameter 
    //  in p1.setX(4.5), p1 is the implicit parameter
    //  -> is the same as (*this).x
    (*this).x = x;
    // this->x = x;
}

void Point::setY(double y)
{
    this->y = y;
}

double Point::getX() const
{
    return x;
}

double Point::getY() const
{
    return y;
}

void Point::display() const
{
    cout << "(" << x << ", " << y << ")";
}

void Point::move(double dx, double dy)
{
    x = x + dx;
    y = y + dy;
}


double Point::distance(const Point &p)
{
    // const needs to be for all p calls
    //      so getX and getY need to be const
    return sqrt(pow((this->x - p.getX()),2) + 
        pow((this->y - p.getY()),2));
}

// double Point::distance(Point *p)
// {
//     return sqrt(pow((this->x - p->getX()),2) + 
//         pow((this->y - p->getY()),2));   
// }

// Every class has a default contstructor
//      it is empty (contains no statements)
// Ours would look like
// Point::Point()
// {
    
// }

// not terribly useful right? so it is generally
//  good to define a default constructor such as
Point::Point()
{
    x = 0;
    y = 0;
}

int main()
{
    // Declare a Point object
    Point p1;
    
    // only difference in declaration between 
    //  class and struct is that that data is private
    //  by default so we cannot access the 
    //  private data like we would in a struct
    // p1.x = 5;
    // cout << p1.x << endl;
    
    // set the x value
    p1.setX(4.5);
    
    // output the x value
    cout << p1.getX() << endl;
    p1.display();
    cout << endl;
    
    Point p2;  // calls default constructor
    p2.setX(1.2);
    p2.display();
    cout << endl;
    
    // Are these necessary???
    //      No because the default constructor
    //      already assigns 0 into these spots.
    p1.setY(0);
    p2.setX(0);
    p2.setY(0);
    
    // Output the distance between p1 and p2
    cout << "dist from p1 to p2: " <<
        p1.distance(p2) << endl;
        
    // cout << "dist from p1 to p2: " <<
    //     p1.distance(&p2) << endl;
    
    return 0;
}

