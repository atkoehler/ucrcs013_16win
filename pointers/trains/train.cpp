/// @author Adam Koehler
/// @date March 2, 2016
/// @brief Fun with pointers and trains!

#include <iostream>
#include "train.h"
#include "car.h"

using namespace std;

Train::Train()
{
    // weight = 0;
    speed = 0;
    numCars = 0;
    trainCarsHead = 0;
    // trainCarsTail = 0;
}

void Train::display()
{
    Car *cur = this->trainCarsHead;
    while(cur != 0)
    {
        cout << cur->getName();
        cur = cur->nextCar;
        
        if (cur != 0)
        {
            cout << " <- ";
        }
    }
}


void Train::addCar(Car *toAdd)
{
    // Empty list needs to reconfigure the tail
    if (trainCarsHead == NULL)
    {
        trainCarsHead = toAdd;
    }
    else
    {
        Car *temp = 0;
        
        // Non-empty list should not touch tail
        temp = trainCarsHead;
        trainCarsHead = toAdd;
        toAdd->nextCar = temp;
    }
}