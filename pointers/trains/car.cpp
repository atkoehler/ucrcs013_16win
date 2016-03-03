/// @author Adam Koehler
/// @date March 2, 2016
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

string Car::getName() const
{
    return this->name;
}
