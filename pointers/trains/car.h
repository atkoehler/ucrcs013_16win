/// @author Adam Koehler
/// @date March 2, 2016
/// @brief Fun with pointers and trains!

#ifndef CAR_H
#define CAR_H
using namespace std;
class Car
{
    private:
        string name;
        double weight;
        double maxSpeed;
    
    // nextCar really should be private, but then we have to do 
    //      some special things with the accessor function to allow
    //      the function to be used as an accessor and a mutator
    //  for now, we will make it public
    public:
        Car* nextCar;
        
    public:
        Car();
        Car(string);
        double getWeight() const;
        double getMaxSpeed() const;
        string getName() const;
        void setNextCar(Car *);
        Car* getNextCar() const;
        void setName(const string &);
};

class EngineCar : public Car
{
    private:
        double fuelCapacity;
        double fuelRemaining;
    
    public:
        EngineCar();
};
#endif