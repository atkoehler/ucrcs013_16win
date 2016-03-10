/// @author Adam Koehler
/// @date March 2 & 4, 2016
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

void Train::display() const
{
    Car *cur = this->trainCarsHead;
    
    while(cur != 0)
    {
        cout << cur->getName();
        cur = cur->nextCar;
        if (cur != 0)
        {
            cout << " -> ";
        }
    }
}

void Train::displayWeights() const
{
    Car *cur = this->trainCarsHead;
    
    while(cur != 0)
    {
        cout << cur->getWeight();
        cur = cur->nextCar;
        if (cur != 0)
        {
            cout << " -> ";
        }
    }
}


void Train::addCarFront(Car *toAdd)
{
    // Empty list needs to reconfigure the tail
    if (trainCarsHead == NULL)
    {
        trainCarsHead = toAdd;
        trainCarsTail = toAdd;
    }
    else
    {
        Car *temp = 0;
        
        // Non-empty list should not touch tail
        temp = trainCarsHead;
        trainCarsHead = toAdd;
        toAdd->nextCar = temp;//setNextCar(temp);
    }
}

void Train::addCarBack(Car *toAdd) {
    if (trainCarsHead == 0) {
        trainCarsHead = toAdd;
        trainCarsTail = toAdd;
    }
    else {
        trainCarsTail->nextCar = toAdd;
        trainCarsTail = toAdd;
    }
}


void Train::deleteCar(int carNum)
{
    // TODO: check for special case for head or tail depending on list 
    if (trainCarsHead == 0)
    {
        return;
    }
    
    // find previous node
    int i = 0;
    Car *prev = trainCarsHead;
    for(i = 1; i + 1 < carNum; i++)
    {
        prev = prev->nextCar;
    }
    
    // Store the node to be deleted in a temporary variable
    Car *temp;
    temp = prev->nextCar;
    
    // Reassign links of linked list to skip deleted node
    // prev->nextCar = (prev->nextCar)->nextCar;
    prev->nextCar = temp->nextCar;
    
    // Are we deleting the only node? If so prev will now be 0.
    if (prev == 0)
    {
        trainCarsTail = 0;
    }
    
    // delete node
    delete temp;
}

void Train::deleteFirstCar()
{
    if (trainCarsHead == 0) {
        return;
    }
    
    if (trainCarsHead == trainCarsTail)
    {
        delete trainCarsHead;
        trainCarsHead = 0;
        trainCarsTail = 0;
    }
    else {
        Car *temp = trainCarsHead;
        trainCarsHead = trainCarsHead->nextCar;
        delete temp;
    }
}

// A better way with linked lists is to have a data member
//      that tracks the length of the list and is added to
//      or subtracted from when nodes are added or deleted.
int Train::getLength() const
{
    int count = 0;
    Car *cur = this->trainCarsHead;
    
    while(cur != 0)
    {
        count++;
        cur = cur->nextCar;
    }    
    return count;
}