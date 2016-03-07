/// @author Adam Koehler
/// @date March 2 & 4, 2016
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

string Car::getName() const
{
    return this->name;
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
    // setName("engine");
    fuelCapacity = 25;
    fuelRemaining = 25;
}