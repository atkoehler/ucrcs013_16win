/// @author Adam Koehler
/// @date March 2, 2016
/// @brief Fun with pointers and trains!

#include "car.h"

using namespace std;

#ifndef TRAIN_H
#define TRAIN_H

class Train
{
    private:
        // double weight;
        double speed;
        int numCars;
        
        // Linked list of train cars!

        
        // Is it beneficial to have a 
        //      link to the tail too?
        // Car* trainCarsTail;
        
        // Need a link to the head of the list
        Car* trainCarsHead;        
    
    public:
        Train();
        double getWeight();
        double getSpeed();
        int getLength();
        
        // Should this add to the 
        //      ending or beginning?
        void addCar(Car *);
        
        // Display the train
        // nameOfCar <- nameOfCar
        void display();
};
#endif