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
    Automobile();
    Automobile(double x, double y, double z, int, int);
    Automobile(double, double, double, double, int, int);
    
    
    // accessors
    // double getX() const;
    void getLocation(double &x, double &y, double &z) const;
    string getColor() const;
    
    // mutators
    void setLocation(double x, double y, double z);
    void accelerate(double);
    
    private:
    // private functions
    string determineColorName() const;
    
    
    
    
};