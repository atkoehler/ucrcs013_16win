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
    Train myTrain2;
    
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
    
    
    // Without an assignment operator overload this is a shallow copy
    // both myTrain2 and myTrain's first car will have the same memory address
    myTrain2 = myTrain;
    cout << "First car of myTrain is at:  " << myTrain.getFirstCar() << endl;
    cout << "First car of myTrain2 is at: " << myTrain2.getFirstCar() << endl;
    cout << endl;
    cout << "myTrain: " << endl;
    for(Car *i = myTrain.getFirstCar(); i != 0; i = i->nextCar)
    {
        cout << i;
        if (i->nextCar != 0)
        {
            cout << " -> ";
        }
    }
    cout << endl;
    cout << "myTrain2: " << endl;
    for(Car *i = myTrain.getFirstCar(); i != 0; i = i->nextCar)
    {
        cout << i;
        if (i->nextCar != 0)
        {
            cout << " -> ";
        }
    }
    cout << endl;
    cout << endl;
    // EngineCar *m1;
    // Car *m2;
    
    // Need to do "new" for each add so that the same node isn't being added
    // First group of adds
    m1 = new EngineCar();
    myTrain.addCarFront(m1);
    m2 = new Car();
    myTrain.addCarFront(m2);
    m2 = new Car();
    myTrain.addCarFront(m2); // Line A
    
    cout << "Current train: " << endl;
    myTrain.display();
    cout << endl << "End of display" << endl;
    
    // // Second group of adds with a delete
    m1 = new EngineCar();
    myTrain.addCarFront(m1);
    myTrain.deleteCar(3);
    m2 = new Car();
    myTrain.addCarFront(m2);
    
    cout << "Current train: " << endl;
    myTrain.display();
    cout << endl << "End of display" << endl;

    return 0;
}