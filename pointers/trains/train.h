/// @author Adam Koehler
/// @date March 2 & 4, 2016
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
        Car* trainCarsTail;
    
    public:
        Train();
        double getWeight();
        double getSpeed();
        int getLength() const;
        
        void addCarFront(Car *);
        void addCarBack(Car *);
        void deleteCar(int);
        void deleteFirstCar();
        
        // Display the train
        // nameOfCar -> nameOfCar
        void display() const;
        void displayWeights() const;
};
#endif