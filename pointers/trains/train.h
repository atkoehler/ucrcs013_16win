/// @author Adam Koehler
/// @date March 6, 8, 10, 2017
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
        double getWeight() const;
        double getSpeed() const;
        int getLength() const;
        
        Car* getFirstCar() const;
        Train & operator=(const Train &rhs);
        
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