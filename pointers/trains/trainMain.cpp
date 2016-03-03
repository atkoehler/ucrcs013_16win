/// @author Adam Koehler
/// @date March 2, 2016
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
    
    Car *m1 = new Car;
    myTrain.addCar(m1);
    cout << "Current train: " << endl;
    myTrain.display();
    cout << endl << "End of display" << endl;
    
    m1 = new Car;
    myTrain.addCar(m1);    
    
    cout << "Current train: " << endl;
    myTrain.display();
    cout << endl << "End of display" << endl;
    
    return 0;
}