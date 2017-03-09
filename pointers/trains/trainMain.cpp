/// @author Adam Koehler
/// @date March 10, 2017
/// @brief Fun with pointers and trains!

#include <iostream>
#include "train.h"
#include "car.h"

using namespace std;

int main()
{
    Train myTrain;
    
    cout << "Current train: " << endl;
    myTrain.display();
    cout << endl << "End of display" << endl;
    
    EngineCar *m1 = new EngineCar();
    myTrain.addCarFront(m1);
    cout << "Current train: " << endl;
    myTrain.display();
    cout << endl << "End of display" << endl;
    
    Car *m2 = new Car();
    myTrain.addCarFront(m2);    
    
    cout << "Current train: " << endl;
    myTrain.display();
    cout << endl << "End of display" << endl;
    
    
    // EngineCar *m1;
    // Car *m2;
    
    // // Need to do "new" for each add so that the same node isn't being added
    // // First group of adds
    // m1 = new EngineCar();
    // myTrain.addCarFront(m1);
    // m2 = new Car();
    // myTrain.addCarFront(m2);
    // m2 = new Car();
    // myTrain.addCarFront(m2); // Line A
    
    // cout << "Current train: " << endl;
    // myTrain.display();
    // cout << endl << "End of display" << endl;
    
    // // // Second group of adds with a delete
    // m1 = new EngineCar();
    // myTrain.addCarFront(m1);
    // myTrain.deleteCar(3);
    // m2 = new Car();
    // myTrain.addCarFront(m2);
    
    // cout << "Current train: " << endl;
    // myTrain.display();
    // cout << endl << "End of display" << endl;

    return 0;
}