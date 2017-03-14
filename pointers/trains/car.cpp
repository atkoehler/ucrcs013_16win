/// @author Adam Koehler
/// @date March 6, 8, 10 2017
/// @brief Fun with pointers and trains!

#include <iostream>
#include "train.h"
#include "car.h"

using namespace std;

Car::Car() 
{
    name = "generic";
    weight = 0;
    maxSpeed = 0;
    nextCar = 0;
}

Car::Car(string n)
{
    name = n;
    weight = 0;
    maxSpeed = 0;
    nextCar = 0;
}

Car::Car(const Car &cpy) {
   name = cpy.name;
   weight = cpy.weight;
   maxSpeed = cpy.maxSpeed;
   nextCar = cpy.nextCar;
}

string Car::getName() const
{
    return this->name;
}

double Car::getWeight() const
{
    return this->weight;
}

void Car::setName(const string &n)
{
    this->name = n;
}

Car* Car::getNextCar() const
{
    return this->nextCar;
}
void Car::setNextCar(Car * t)
{
    this->nextCar = t;
}

EngineCar::EngineCar() : Car("engine")
{
    // how to access parent's function
    //this.name = Car::getName();
    // setName("engine");
    fuelCapacity = 25;
    fuelRemaining = 25;
}


PeopleCar::PeopleCar() : Car("people")
{
    numSeats = 25;
    numPeople = 10;
}

double PeopleCar::getWeight() const
{
    return this->numPeople * 111;
}