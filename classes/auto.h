/// @author Adam Koehler
/// @date February 22, 2017
/// @brief class definitions in class activity

// Write the class definition for an automobile. Your class should 
//  be called Automobile and contain data fields and function 
//  prototypes needed to simulate an automobile object within a 
//  computer game. 
// You are writing the class definition, you are not implementing 
//  the actual class.

class Automobile
{
    
    private:
    // data fields
    double x, y, z; // location  
    
    double speed;
    
    // We could have a class for colors
    // Color carColor;
    int carColor;
    int wheels;
    
    
    // interface
    public:
    // a default constructor is always provided, but it does not
    //  always make sense. if an object is to be initialized
    //  in the private data then a default constructor won't 
    //  always work correctly.
    Automobile();
    
    // We use the names to create self commenting code
    //  so that we don't have to provide comments noting which
    //  arguments correspond to which data members
    Automobile(double x, double y, double z, int carColor, int wheels);
    
    // notice how the self commented code is much more readable and
    //  easily interpretted than the following constructor, even 
    //  though both are perfectly valid
    Automobile(double, double, double, double, int, int);
    
    
    // accessors - functions that acquire the values of 
    //      the private data members
    
    // we could have individual ones per private data field, 
    //  but sometimes it doesn't make sense to get the X value
    //  of the location.
    // double getX() const;
    void getLocation(double &x, double &y, double &z) const;
    string getColor() const;
    
    // mutators - functions that change the private data members
    void setLocation(double x, double y, double z);
    void accelerate(double);
    
    // this could go up with the private data members,
    //  or down here with the public functions but private
    //  needs to be restated
    private:
    // private functions
    string determineColorName() const;
};