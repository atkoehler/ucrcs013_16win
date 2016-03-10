/// @author Adam Koehler
/// @date March 2 & 4, 2016
/// @brief Fun with pointers and trains!

#include <iostream>
#include "train.h"
#include "car.h"

using namespace std;

int main()
{
    Train myTrain;
    
    // cout << "Current train: " << endl;
    // myTrain.display();
    // cout << endl << "End of display" << endl;
    
    // EngineCar *m1 = new EngineCar();
    // myTrain.addCar(m1);
    // cout << "Current train: " << endl;
    // myTrain.display();
    // cout << endl << "End of display" << endl;
    
    // Car *m2 = new Car();
    // myTrain.addCar(m2);    
    
    // cout << "Current train: " << endl;
    // myTrain.display();
    // cout << endl << "End of display" << endl;
    
    
    // EngineCar *m1;
    // Car *m2;
    
    // // Need to do "new" for each add so that the same node isn't being added
    // // First group of adds
    // m1 = new EngineCar();
    // myTrain.addCar(m1);
    // m2 = new Car();
    // myTrain.addCar(m2);
    // m2 = new Car();
    // myTrain.addCar(m2); // Line A
    
    // cout << "Current train: " << endl;
    // myTrain.display();
    // cout << endl << "End of display" << endl;
    
    // // // Second group of adds with a delete
    // m1 = new EngineCar();
    // myTrain.addCar(m1);
    // myTrain.deleteCar(3);
    // m2 = new Car();
    // myTrain.addCar(m2);
    
    // cout << "Current train: " << endl;
    // myTrain.display();
    // cout << endl << "End of display" << endl;
    
    Car *m1;
    for (int i=0; i < 5; i++) {
        // myTrain.display(); cout << endl;
        if (i % 3 == 0) {
            // EngineCar *m1 = new EngineCar();
            m1 = new EngineCar();
            myTrain.addCarBack(m1);
        }
        else if (i % 3 == 1) {
            // PeopleCar *m2 = new PeopleCar();
            m1 = new PeopleCar();
            myTrain.addCarBack(m1);
        }
        else {
            m1 = new Car();
            myTrain.addCarBack(m1);
        }
    }
    
    myTrain.display(); 
    cout << endl;
    
    myTrain.displayWeights(); 
    cout << endl;

    return 0;
}